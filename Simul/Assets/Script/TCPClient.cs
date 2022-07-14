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

	Thread m_Thread = new Thread(StartClient);
	private const int m_Port = 7000;
	private static ManualResetEvent m_ConnectDone = new ManualResetEvent(false);
	private static ManualResetEvent m_SendDone = new ManualResetEvent(false);
	private static ManualResetEvent m_ReceiveDone = new ManualResetEvent(false);

	private static string response = string.Empty;
	static Socket m_Client;

	// Start is called before the first frame update
	void Start()
	{
		m_Thread.Start();
	}

	// Update is called once per frame
	void Update()
	{
		
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

			Send(m_Client, "Test <EOF>");
			m_SendDone.WaitOne();

			Receive(m_Client);
			m_ReceiveDone.WaitOne();

			Debug.Log("Response received : " + response);

			m_Client.Shutdown(SocketShutdown.Both);
			m_Client.Close();
		}
		catch (Exception e)
		{
			Debug.Log(e.ToString());
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
			Debug.Log(e.ToString());
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
			Debug.Log(e.ToString());
		}
	}
	private static void ReceiveCallback(IAsyncResult ar)
	{
		try
		{

			StateObject state = (StateObject)ar.AsyncState;
			Socket client = (Socket)ar.AsyncState;

			int bytesRead = client.EndReceive(ar);

			if (bytesRead > 0)
			{
				state.m_SB.Append(Encoding.ASCII.GetString(state.m_Bytes, 0, bytesRead));

				client.BeginReceive(state.m_Bytes, 0, StateObject.m_BufferSize, 0, new AsyncCallback(ReceiveCallback), state);
			}
			else
			{
				if (state.m_SB.Length > 1)
				{
					response = state.m_SB.ToString();
				}
				m_ReceiveDone.Set();
			}
		}
		catch (Exception e)
		{
			Debug.Log(e.ToString());
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
			Socket client = (Socket)ar.AsyncState;

			int bytesSent = client.EndSend(ar);
			Debug.Log("sned " + bytesSent + "bytes to setver ");

			m_SendDone.Set();
		}
		catch (Exception e)
		{
			Debug.Log(e.ToString());
		}
	}
	private static void CloseClient(Socket clietn)
	{
		clietn.Shutdown(SocketShutdown.Both);
		clietn.Close();
	}
	public void TcpMessageSend()
	{
		//if (str.IndexOf("<EOF>") <= -1)
		//{
		//	str += "<EOF>";
		//}
		//Send(m_Client, str);
	}

}
