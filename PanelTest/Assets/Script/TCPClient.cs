using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net.Sockets;
using System.Net;
using System.Text;
using System.Threading;
using System;
using TMPro;

public class TCPClient : MonoBehaviour
{
	private static TCPClient tcpClient = null;
	private TCPClient() { }

	public static TCPClient getInstance()
	{
		if(tcpClient == null)
		{
			tcpClient = new TCPClient();
		}
		return tcpClient;
	}

	public class StateObject
	{
		public Socket m_WorkSocket = null;
		public const int m_BufferSize = 256;
		public byte[] m_Bytes = new byte[m_BufferSize];
		public StringBuilder m_SB = new StringBuilder();
	}
	private static TCPClient m_TcpClient;
	public static TCPClient Instance()
	{
		if (m_TcpClient == null)
		{
			m_TcpClient = new TCPClient();
		}
		return m_TcpClient;
	}

	static Thread m_StartThread = new Thread(StartClient);
	static Thread m_ReceiveThread = new Thread(ReceiveThread);


	private static int m_Port = 6001;
	private static ManualResetEvent m_ConnectDone = new ManualResetEvent(false);
	private static ManualResetEvent m_SendDone = new ManualResetEvent(false);
	private static ManualResetEvent m_ReceiveDone = new ManualResetEvent(false);

	private static string response = string.Empty;
	static Socket m_Client;

	public static float m_OldHorizental = 0.0f;
	public static float m_OldVertical = 0.0f;
	public static float horizental;
	public static float Vertical;
	public static bool m_SendCheck = false;
	public static int m_NAKCount = 0;
	public static int m_NAKLimitCount = 10;
	public static string m_IP;
	public TMP_InputField m_TextMesh;
	public static TMP_InputField m_TextMeshStatic;
	
	public TMP_InputField m_TextMeshPort;
	public static TMP_InputField m_TextMeshStaticPort;

	public TMP_Text M_Speed;
	static TMP_Text M_SpeedStatic;

	// Start is called before the first frame update
	void Start()
	{
		
		//InvokeRepeating("SendTest", 10.0f, 2.0f);
		m_IP = "175.214.78.116";
		m_TextMesh.text = m_IP;
		m_TextMeshPort.text = m_Port.ToString();
		M_SpeedStatic = M_Speed;
		Debug.Log("test");
		m_TextMeshStatic = m_TextMesh;
		m_TextMeshStaticPort = m_TextMeshPort;
		InvokeRepeating("SendFlagTrue", 20f, 2f);
	}

	// Update is called once per frame
	void Update()
	{
		GetJoyStickData();
	}

	private static void StartClient()
	{
		try
		{
			m_IP = m_TextMeshStatic.text;
			m_Port = int.Parse(m_TextMeshStaticPort.text);
			//string ip = "192.168.185.44";
			IPAddress HostNameCheckIp = IPAddress.Parse(m_IP);
			IPHostEntry ipHostInfo = Dns.GetHostEntry(HostNameCheckIp);
			IPAddress iPAddress = ipHostInfo.AddressList[0];
			IPEndPoint remoteEP = new IPEndPoint(iPAddress, m_Port);
			m_Client = new Socket(iPAddress.AddressFamily, SocketType.Stream, ProtocolType.Tcp);

			m_Client.BeginConnect(remoteEP, new System.AsyncCallback(ConnectCallback), m_Client);
			m_ConnectDone.WaitOne();
			if (m_Client.Connected)
			{
				m_ReceiveThread.Start();
				Debug.Log("m_Client.Connected");
			}

		}
		catch (Exception e)
		{
			Debug.Log("Start Client => " + e.ToString());
		}
	}
	private static void ConnectCallback(IAsyncResult ar)
	{
		try
		{
			Socket client = (Socket)ar.AsyncState;
			client.EndConnect(ar);
			Debug.Log("Socket Connect To : " + client.RemoteEndPoint.ToString());
			m_ConnectDone.Set();
		}
		catch (Exception e)
		{
			Debug.Log("Connect Call Back -> " + e.ToString());
		}
	}
	private static void ReceiveThread()
	{
		try
		{
			while (true)
			{
				if (m_Client.Connected)
				{
					m_ReceiveDone.Reset();
					Receive(m_Client);
					m_ReceiveDone.WaitOne();
					Debug.Log("Response received : " + response);
					//ReceiveDataCheck(response);
				}
			}
		}catch(Exception e)
		{
			Debug.LogError("ReceiveThread Error -> " + e);
		}
	}
	private static void Send(Socket client, string data)
	{
		byte[] byteData = Encoding.ASCII.GetBytes(data);

		client.BeginSend(byteData, 0, byteData.Length, 0, new AsyncCallback(SendCallback), client);

	}
	private static void SendCallback(IAsyncResult ar)
	{
		try
		{
			m_SendDone.Set();
			Socket client = (Socket)ar.AsyncState;

			int bytesSent = client.EndSend(ar);
			Debug.Log("sned " + bytesSent + "bytes to setver ");

		}
		catch (Exception e)
		{
			Debug.Log("Send Call Back -> " + e.ToString());
		}
	}
	private static void Receive(Socket client)
	{
		try
		{
			StateObject state = new StateObject();
			state.m_WorkSocket = client;

			client.BeginReceive(state.m_Bytes, 0, StateObject.m_BufferSize, 0, new AsyncCallback(ReceiveCallback), state);
		}
		catch (Exception e)
		{
			Debug.Log("Receive -> " + e.ToString());
		}
	}
	private static void ReceiveCallback(IAsyncResult ar)
	{
		try
		{
			StateObject state = (StateObject)ar.AsyncState;
			Socket client = state.m_WorkSocket;

			int bytesRead = client.EndReceive(ar);

			if (bytesRead > 0)
			{
				Debug.Log("Byte Read Length -> " + bytesRead);
				state.m_SB.Append(Encoding.ASCII.GetString(state.m_Bytes, 0, bytesRead));
				response = state.m_SB.ToString();
				ReceiveDataCheck(response);
				m_ReceiveDone.Set();
			}
		}
		catch (Exception e)
		{
			Debug.Log("Receive Call Back -> " + e.ToString());
		}
	}



	public static void SendTCPMessage(string message)
	{
		if (string.IsNullOrEmpty(message))
			return;

		if(message.IndexOf("<EOF>") <= -1)
		{
			message += "<EOF>";
		}
		Send(m_Client, message);
		Debug.Log(message);
	}
	public static void GetJoyStickData()
	{
		if (m_Client != null && m_Client.Connected)
		{
			horizental = SimpleInput.GetAxis("Horizontal");
			Vertical = SimpleInput.GetAxis("Vertical");

			//SendTCPMessage("Horizental:" + horizental + "/" + "Vertical:" + Vertical + "/");

			if (horizental != m_OldHorizental || Vertical != m_OldVertical || m_SendCheck)
			{
				m_OldVertical = Vertical;
				m_OldHorizental = horizental;
				m_SendCheck = false;
				SendTCPMessage("Horizental:" + horizental + "/" + "Vertical:" + Vertical + "/");

			}
		}
	}

	public static void ReceiveDataCheck(string str)
	{
		str = str.ToUpper();
		if (str.IndexOf("RESULT") > -1)
		{
			if (str.IndexOf("ACK") > -1)
			{
				Debug.Log("ACK");
				m_NAKCount = 0;
			}
			else if (str.IndexOf("NAK") > -1)
			{
				m_NAKCount++;
				if (m_NAKLimitCount < m_NAKCount)
				{
					Debug.Log("m_NAKCount");
					m_NAKCount = 0;
					m_Client.Shutdown(SocketShutdown.Both);
					m_Client.Close();
				}
				else
					m_SendCheck = true;
				Debug.Log("NAK");
			}
		}
		else if (str.IndexOf("SPEED") > -1)
		{
			int getParsCnt = str.IndexOf(":") + 1;
			int getEOFCnt = str.IndexOf("<EOF>");
			string getSpeed = str.Substring(getParsCnt, getEOFCnt - getParsCnt);
			Debug.Log("SPEED -> " + getSpeed);
			M_SpeedStatic.text = getSpeed + " Km/h";
		}
	}
	public void SendFlagTrue()
	{
		//Debug.Log("Repeating");
		m_SendCheck = true;
	}

	public void BtnConnectClick()
	{
		if(m_Client == null || !m_Client.Connected)
			m_StartThread.Start();
	}
	public void BtnDisConnectClick()
	{
		m_ConnectDone.Set();
		m_Client.Shutdown(SocketShutdown.Both);
		m_Client.Disconnect(true);
	}
}
