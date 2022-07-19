using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using UnityEngine;

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
	public static ManualResetEvent m_ConnectDone = new ManualResetEvent(false);
	public static ManualResetEvent m_ReadDone = new ManualResetEvent(false);
	public static ManualResetEvent m_SendDone = new ManualResetEvent(false);

	public static Thread m_StartThread = new Thread(StartListening);
	public static Thread m_ReadThread = new Thread(ReadThread);
	public static bool m_IsConnect = false;
	public static Socket m_Listener = null;
	public static Socket m_Handler;

	public static string m_Content = string.Empty;
	public PrometeoCarController m_Controller;
	public static PrometeoCarController m_StaticController;
	// Start is called before the first frame update
	void Start()
	{
		Debug.Log("TCP Server Test Start ");
		//StartListening(); //ÀÏ¹ÝÀ¸·Î ½ÃÀÛÇÏ¸é ¸ØÃã .. 
		//InvokeRepeating("SendTest", 10.0f, 1.0f);
		m_StartThread.Start();
		tcpServer = TCPServer.getInstance();
		tcpServer.m_Controller = m_Controller;

	}

	// Update is called once per frame
	void Update()
	{
		test();
	}
	public static void test()
	{
		
	}

	public static void StartListening()
	{
		IPAddress iPAddress = IPAddress.Parse("175.214.78.116");
		IPEndPoint localEndPoint = new IPEndPoint(iPAddress, 7000);
		m_Listener = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
		StateObject state = new StateObject();
		try
		{
			m_Listener.Bind(localEndPoint);
			m_Listener.Listen(100);

			m_ConnectDone.Reset();
			m_Listener.BeginAccept(new AsyncCallback(AcceptCallBack), m_Listener);
			Debug.Log("Waiting for connect");
			m_ConnectDone.WaitOne();
			Debug.Log("Connected");
			m_ReadThread.Start();
		}
		catch (Exception e)
		{
			Debug.LogException(e);

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
		m_ConnectDone.Set();
		Socket m_Listener = (Socket)ar.AsyncState;
		m_Handler = m_Listener.EndAccept(ar);

		StateObject state = new StateObject();
		state.m_WorkSocket = m_Handler;
		m_IsConnect = true;

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
		startHorizentalIndex += horizentalString.Length + 1;
		startVerticalIndex += verticalString.Length + 1;

		//Data : Horizental:-0.332958/Vertical:-0.332958/<EOF>
		horizentalTmp = str.Substring(startHorizentalIndex, str.IndexOf("/") - startHorizentalIndex);
		VerticalTmp = str.Substring(startVerticalIndex, str.LastIndexOf("/") - startVerticalIndex);

		
		horizental = float.Parse(horizentalTmp);
		vertical = float.Parse(VerticalTmp);

		log = "h Tmp -> " + horizentalTmp + "/" + "V Tmp -> " + VerticalTmp;
		//Debug.Log(log);
		Debug.Log("V -> " + vertical);

		if (horizental > 0)
		{
			tcpServer.m_Controller.TCPFlagTrue("D");
			Debug.Log("D");
		}
		else if (horizental < 0)
		{
			tcpServer.m_Controller.TCPFlagTrue("A");
			Debug.Log("A");
		}

		if(vertical > 0)
		{
			tcpServer.m_Controller.TCPFlagTrue("W");
			Debug.Log("W");
		}
		else if(vertical < 0)
		{
			tcpServer.m_Controller.TCPFlagTrue("S");
			Debug.Log("S");
		}

	}
}

