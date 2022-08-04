using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class TCPServer : MonoBehaviour
{
	private static TCPServer tcpServer;
	private TCPServer() { }

	public static TCPServer getInstance()
	{
		if (tcpServer == null)
			tcpServer = new TCPServer();
		return tcpServer;
	}

	public class StateObject
	{
		public const int m_BufferSize = 1024;
		public byte[] m_Buffer = new byte[m_BufferSize];
		public StringBuilder m_SB = new StringBuilder();
		public Socket m_WorkSocket = null;
	}

	public static bool m_StateSendCheck = false;
	public static string m_OldSpeed = "0";


	public static ManualResetEvent m_ConnectDone = new ManualResetEvent(false);
	public static ManualResetEvent m_ConnectSBegin = new ManualResetEvent(false);

	public static ManualResetEvent m_ReadDone = new ManualResetEvent(false);
	public static ManualResetEvent m_SendDone = new ManualResetEvent(false);

	public static Thread m_StartThread = new Thread(StartListening);
	public static Thread m_ReadThread = new Thread(ReadThread);
	public static Socket m_Listener = null;
	public static Socket m_Handler;

	public static string m_Content = string.Empty;
	public PrometeoCarController m_Controller;

	public TMP_Text M_TMPText;
	static TMP_Text M_TMPTextStatic;

	public GameObject M_Speed;
	static GameObject M_SpeedStatic;

	public static int port = 6001;
	public static string ip = "NULL";
	 
	public TMP_InputField m_TextMeshPort;
	public static TMP_InputField m_TextMeshStaticPort;

	// Start is called before the first frame update
	void Start()
	{
		Debug.Log("TCP Server Test Start ");
		//StartListening(); //�Ϲ����� �����ϸ� ���� .. 
		//InvokeRepeating("SendTest", 10.0f, 1.0f);
		tcpServer = TCPServer.getInstance();
		tcpServer.m_Controller = m_Controller;
		M_TMPTextStatic = M_TMPText;
		M_SpeedStatic = M_Speed;
		//m_StartThread.Start();
		m_TextMeshPort.text = port.ToString();
		m_TextMeshStaticPort = m_TextMeshPort;
		m_StartThread.Start();
		m_ConnectSBegin.Reset();
		InvokeRepeating("StateSendInvoke", 0.1f, 2.0f);
	}

	// Update is called once per frame
	void Update()
	{
		if (m_Listener != null)
			M_TMPTextStatic.text = ip.ToString() + " / " + port;
		else
			M_TMPTextStatic.text = "NULL";
		StateCheck();
	}

	public static void StartListening()
	{
		try
		{
			while (true)
			{
				m_ConnectSBegin.WaitOne();
				port = int.Parse(m_TextMeshStaticPort.text);

				//IPAddress iPAddress = IPAddress.Parse("175.214.78.116");
				IPHostEntry iPHostEntry = Dns.GetHostEntry(Dns.GetHostName());
				IPAddress iPAddress = iPHostEntry.AddressList[1];

				Debug.Log("IP -> " + iPAddress);
				ip = iPAddress.ToString();
				IPEndPoint localEndPoint = new IPEndPoint(iPAddress, port);
				m_Listener = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
				StateObject state = new StateObject();
				m_Listener.Bind(localEndPoint);
				m_Listener.Listen(100);
				m_ConnectDone.Reset();
				m_Listener.BeginAccept(new AsyncCallback(AcceptCallBack), m_Listener);
				Debug.Log("Waiting for connect");
				m_ConnectDone.WaitOne();

				Debug.Log("Connected");

				if (m_ReadThread.ThreadState == ThreadState.Unstarted)
					m_ReadThread.Start();
				m_ConnectDone.Reset();
			}
		}
		catch (Exception e)
		{
			Debug.LogException(e);
			m_Listener.Close();
			m_Listener = null;
		}
	}


	public static void ReadThread()
	{
		try
		{
			while (true)
			{
				m_ReadDone.Reset();
				Receive(m_Handler);
				m_ReadDone.WaitOne();
			}
		}
		catch (Exception e)
		{
			Debug.LogError(e);
		}
	}

	public static void AcceptCallBack(IAsyncResult ar)
	{
		Socket m_Listener = (Socket)ar.AsyncState;
		m_Handler = m_Listener.EndAccept(ar);

		StateObject state = new StateObject();
		state.m_WorkSocket = m_Handler;

		m_ConnectDone.Set();
	}
	private static void Receive(Socket client)
	{
		try
		{
			StateObject state = new StateObject();
			state.m_WorkSocket = client;

			client.BeginReceive(state.m_Buffer, 0, StateObject.m_BufferSize, 0, new AsyncCallback(ReadCallBack), state);
		}
		catch (Exception e)
		{
			Debug.Log("Receive -> " + e.ToString());
		}
	}
	public static void ReadCallBack(IAsyncResult ar)
	{
		m_Content = string.Empty;

		StateObject state = (StateObject)ar.AsyncState;
		Socket handler = state.m_WorkSocket;

		int bytesRead = handler.EndReceive(ar);

		if (bytesRead > 0)
		{
			m_ReadDone.Set();
			state.m_SB.Append(Encoding.ASCII.GetString(state.m_Buffer), 0, bytesRead);
			m_Content = state.m_SB.ToString();

			if (m_Content.IndexOf("<EOF>") > -1)
			{
				//Debug.Log("Read " + m_Content.Length + " bytes from sokect. \n Data : " + m_Content);
				ReceiveDataCheck(m_Content);
			}
			else
			{
				handler.BeginReceive(state.m_Buffer, 0, StateObject.m_BufferSize, 0, new AsyncCallback(ReadCallBack), state);
			}
		}
	}

	private static void Send(Socket handler, string data)
	{
		byte[] byteData = Encoding.ASCII.GetBytes(data);
		handler.BeginSend(byteData, 0, byteData.Length, 0, new AsyncCallback(SendCallback), handler);
	}
	private static void SendCallback(IAsyncResult ar)
	{
		try
		{
			Socket handler = (Socket)ar.AsyncState;

			int bytesSent = handler.EndSend(ar);
			Debug.Log("Sent " + bytesSent + " bytes to client");

		}
		catch (Exception e)
		{
			Debug.LogError(e);
		}
	}
	public static void ReceiveDataCheck(string str)
	{
		string horizentalString = "Horizental";
		string verticalString = "Vertical";
		string horizentalTmp = string.Empty;
		string VerticalTmp = string.Empty;
		float horizental;
		float vertical;

		string log = string.Empty;

		int startHorizentalIndex = str.IndexOf(horizentalString);
		int startVerticalIndex = str.IndexOf(verticalString);

		if (string.IsNullOrEmpty(str) || startHorizentalIndex < 0 || startVerticalIndex < 0)
		{
			Send(m_Handler, "RESULT:NAK");
			return;
		}

		startHorizentalIndex += horizentalString.Length + 1;
		startVerticalIndex += verticalString.Length + 1;

		//Data : Horizental:-0.332958/Vertical:-0.332958/<EOF>
		horizentalTmp = str.Substring(startHorizentalIndex, str.IndexOf("/") - startHorizentalIndex);
		VerticalTmp = str.Substring(startVerticalIndex, str.LastIndexOf("/") - startVerticalIndex);


		horizental = float.Parse(horizentalTmp);
		vertical = float.Parse(VerticalTmp);

		log = "h Tmp -> " + horizental + "/" + "V Tmp -> " + vertical;
		//Debug.Log(log);
		//Debug.Log("V -> " + vertical);

		if (horizental > 0.0f)
		{
			tcpServer.m_Controller.TCPFlagTrue("D", horizental);
			Debug.Log("D");
		}
		else if (horizental < 0.0f)
		{
			tcpServer.m_Controller.TCPFlagTrue("A", horizental);
			Debug.Log("A");
		}

		if (vertical > 0.0f)
		{
			tcpServer.m_Controller.TCPFlagTrue("W", vertical);
			Debug.Log("W");
		}
		else if (vertical < 0.0f)
		{
			tcpServer.m_Controller.TCPFlagTrue("S", vertical);
			Debug.Log("S");
		}
		Send(m_Handler, "RESULT:ACK");
	}
	public static void BtnServerOpenClick()
	{
		if (m_Listener == null)
		{
			m_ConnectSBegin.Set();
		}
	}
	public static void BtnServerCloseClick()
	{
		if (m_Listener != null)
		{
			m_Listener.Close();
			m_Listener = null;

		}
	}
	public static void SendState()
	{
		if (m_Handler != null && m_Handler.Connected && m_StateSendCheck)
		{
			Send(m_Handler, m_OldSpeed + "<EOF>");
			Debug.Log("Send State -> " + m_OldSpeed);
		}
	}
	public void StateCheck()
	{
		string getSpeed = "SPEED:" + M_SpeedStatic.GetComponent<Text>().text;

		if (!getSpeed.Equals(m_OldSpeed))
		{
			m_StateSendCheck = true;
			m_OldSpeed = getSpeed;
			Debug.Log("State Check -> " + m_OldSpeed);
		}
		SendState();
	}
	public void StateSendInvoke()
	{
		m_StateSendCheck = true;
	}
}

