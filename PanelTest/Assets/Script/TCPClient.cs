using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net.Sockets;
using System.Net;
using System.Text;
using System.Threading;
using System;

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


	private const int m_Port = 7000;
	private static ManualResetEvent m_ConnectDone = new ManualResetEvent(false);
	private static ManualResetEvent m_SendDone = new ManualResetEvent(false);
	private static ManualResetEvent m_ReceiveDone = new ManualResetEvent(false);

	private static string response = string.Empty;
	static Socket m_Client;

	public static float m_OldHorizental = 0.0f;
	public static float m_OldVertical = 0.0f;
	public static float horizental;
	public static float Vertical;
	public static bool m_ConnectCheck = false;
	// Start is called before the first frame update
	void Start()
	{
		//InvokeRepeating("SendTest", 10.0f, 2.0f);
		m_StartThread.Start();
		Debug.Log("test");
		//InvokeRepeating("GetJoyStickData", 0.1f, 0.1f);

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
			string ip = "175.214.78.116";
			IPAddress HostNameCheckIp = IPAddress.Parse(ip);
			IPHostEntry ipHostInfo = Dns.GetHostEntry(HostNameCheckIp);
			IPAddress iPAddress = ipHostInfo.AddressList[0];
			IPEndPoint remoteEP = new IPEndPoint(iPAddress, m_Port);
			m_Client = new Socket(iPAddress.AddressFamily, SocketType.Stream, ProtocolType.Tcp);
			m_Client.BeginConnect(remoteEP, new System.AsyncCallback(ConnectCallback), m_Client);
			m_ConnectDone.WaitOne();

			m_ReceiveThread.Start();
			m_ConnectCheck = true;

		}
		catch (Exception e)
		{
			Debug.Log("Start Client => " + e.ToString());
		}
	}
	private static void ReceiveThread()
	{
		try
		{
			while(true)
			{
				m_ReceiveDone.Reset();
				Receive(m_Client);
				m_ReceiveDone.WaitOne();
				Debug.Log("Response received : " + response);
			}
		}catch(Exception e)
		{
			Debug.LogError("ReceiveThread Error -> " + e);
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
				m_ReceiveDone.Set();
			}
		}
		catch (Exception e)
		{
			Debug.Log("Receive Call Back -> " + e.ToString());
		}
	}

	private void SendTest()
	{
		Send(m_Client, "Send Test <EOF>");
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
		if(m_ConnectCheck)
		{
			horizental = SimpleInput.GetAxis("Horizontal");
			Vertical = SimpleInput.GetAxis("Vertical");

			SendTCPMessage("Horizental:" + horizental + "/" + "Vertical:" + Vertical + "/");
			//if (horizental != m_OldHorizental || Vertical != m_OldVertical ||
			//	horizental == 1 || horizental == -1 || Vertical == 1 || Vertical == -1)
			//{
			//	m_OldVertical = Vertical;
			//	m_OldHorizental = horizental;
			//
			//}
		}
	}
}
