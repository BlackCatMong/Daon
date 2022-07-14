using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using UnityEngine;

public class TCPServer : MonoBehaviour
{
	public class StateObject
	{
		public const int m_BufferSize = 1024;
		public byte[] m_Buffer = new byte[m_BufferSize];
		public StringBuilder m_SB = new StringBuilder();
		public Socket m_WorkSocket = null;
	}
	public static ManualResetEvent m_AllDone = new ManualResetEvent(false);
	Thread m_Thread = new Thread(StartListening);

	// Start is called before the first frame update
	void Start()
	{
		//StartListening(); //ÀÏ¹ÝÀ¸·Î ½ÃÀÛÇÏ¸é ¸ØÃã .. 
		m_Thread.Start();
	}

	// Update is called once per frame
	void Update()
	{

	}

	public TCPServer() { }

	public static void StartListening()
	{
		//IPHostEntry iPHostInfo = Dns.GetHostEntry(Dns.GetHostName());
		//IPAddress iPAddress = iPHostInfo.AddressList[0];
		//IPEndPoint localEndPoint = new IPEndPoint(iPAddress, 7000);
		IPAddress iPAddress = IPAddress.Parse("175.214.78.116");
		IPEndPoint localEndPoint = new IPEndPoint(iPAddress, 7000);
		Socket listener = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);

		try
		{
			listener.Bind(localEndPoint);
			listener.Listen(100);

			while (true)
			{
				m_AllDone.Reset();
				Debug.Log("Waiting for a Connect");
				listener.BeginAccept(new AsyncCallback(AcceptCallBack), listener);
				m_AllDone.WaitOne();
			}
		}
		catch (Exception e)
		{
			Debug.LogException(e);
		}
	}

	public static void AcceptCallBack(IAsyncResult ar)
	{
		m_AllDone.Set();
		Socket listener = (Socket)ar.AsyncState;
		Socket handler = listener.EndAccept(ar);

		StateObject state = new StateObject();
		state.m_WorkSocket = handler;
		handler.BeginReceive(state.m_Buffer, 0, StateObject.m_BufferSize, 0, new AsyncCallback(ReadCallBack), state);
	}
	public static void ReadCallBack(IAsyncResult ar)
	{
		string content = string.Empty;

		StateObject state = (StateObject)ar.AsyncState;
		Socket handler = state.m_WorkSocket;

		int bytesRead = handler.EndReceive(ar);

		if (bytesRead > 0)
		{
			state.m_SB.Append(Encoding.ASCII.GetString(state.m_Buffer), 0, bytesRead);
			content = state.m_SB.ToString();

			if (content.IndexOf("<EOF>") > -1)
			{
				Debug.Log("Read " + content.Length + " bytes from sokect. \n Data : " + content);
				Send(handler, content);
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

			//handler.Shutdown(SocketShutdown.Both);
			//handler.Close();
		}
		catch (Exception e)
		{
			Debug.LogError(e);
		}
	}
	private static void ServerClose(Socket server)
	{
		server.Shutdown(SocketShutdown.Both);
		server.Close();
	}

}

