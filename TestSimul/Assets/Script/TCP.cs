using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net;
using System.Net.Sockets;
public class TCP : MonoBehaviour
{
	TcpListener m_Listener;
	IPAddress m_IPAdress = IPAddress.Any;
	int m_Port = 7000;;
	byte[] m_Buffer = new byte[1024];

    // Start is called before the first frame update
    void Start()
    {
		m_Listener = new TcpListener(m_IPAdress, m_Port);
		m_Listener.Start();
		Debug.Log("Server Start / IP -> " + m_IPAdress + " / Port -> " + m_Port);

    }

    // Update is called once per frame
    void Update()
    {
        TcpClient tc = m_Listener.AcceptTcpClient();

		NetworkStream stream = tc.GetStream();

		int nByte;

		while ((nByte= stream.Read(m_Buffer, 0, m_Buffer.Length)) > 0)
		{
			stream.Write(m_Buffer, 0, nByte);
		}

		stream.Close();
		tc.Close();
    }
}
