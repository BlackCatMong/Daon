using UnityEngine;
using Google.XR.ARCoreExtensions;
using System.IO;
using UnityEngine.XR.ARFoundation;
using System.Net;

public class VideoLoadTest : MonoBehaviour
{
	// Start is called before the first frame update
	public ARPlaybackManager aRPlaybackManager;
	public ARSession arSession;
	
	System.Uri uri;
	
	string mp4Name = "/Test.mp4";
	bool setPlayBackDataSet = false;
	float timeOut = 0.0f;
	
	void Start()
    {
		Debug.Log("Video Load Test Start !!!!!!!!!!!!!");
		
		string path = Application.persistentDataPath + mp4Name;
		uri = new System.Uri(path);
	
	
		//PlayBackDataSet();
	}
	
	// Update is called once per frame
	void Update()
    {
		if (setPlayBackDataSet)
		{
			if ((int)timeOut % 100 == 0)
			{
				PlaybackResult result;
				
				result = aRPlaybackManager.SetPlaybackDatasetUri(uri);
	
				//if (aRCoreExtensions.Session.isActiveAndEnabled)
				//{
				//	Debug.Log/("###################################################aRCoreExtensions.Session.isActiveAndEnabled .##################################");
				//	aRCoreExtensions.Session.enabled = false;
				//}
				if (result == PlaybackResult.ErrorPlaybackFailed || result == PlaybackResult.SessionNotReady)
				{
					string str = "playbackstatus => " + aRPlaybackManager.PlaybackStatus + "\n";
					//str += "ARSession.state => " + ARSession.state + "\n";
					str += "result => " + result + "\n";
					Debug.Log(str);
				}
				else
				{
					if(result == PlaybackResult.OK)
					{
						Debug.Log("Result Ok !! ");
						arSession.enabled = true;
					}
				}
			}
			if ((int)timeOut > 0)
				timeOut -= Time.deltaTime;
			else
				timeOut = timeOut += 1000.0f;
		}
	}
	public void PlayBackDataSet()
	{
		//aRCoreExtensions.Session.enabled = false;
		arSession.enabled = false;
		setPlayBackDataSet = true;
		timeOut = 1000.0f;
	}


	public void FileCheck(string str)
	{
		string log = str;
	
		System.Uri uri = new System.Uri(str);
		
		if (File.Exists(str))
			log += " ------- file Exist";
		else
			log += "  ----------file not exist";
	
		Debug.Log(log);
	}
	public void FolderCheck(string str)
	{
		string log = str;
	
		System.Uri uri = new System.Uri(str);
	
		if (Directory.Exists(str))
			log += " ------- folder Exist";
		else
			log += "  ---------- folder not exist";
	
		Debug.Log(log);
		//aRPlaybackManager = new ARPlaybackManager();
	}
	
	public void URLExistCheck(string uri)
	{
		bool result = true;
	
		WebRequest webRequest = WebRequest.Create(uri);
		webRequest.Timeout = 1200;
		webRequest.Method = "HEAD";
	
		try
		{
			webRequest.GetResponse();
		}
		catch
		{
			result = false;
		}
	
		if (result)
		{
			Debug.Log("Web File Check -> // " + uri + " // " + " ---- Exist");
		}
		else
		{
			Debug.Log("Web File Check -> // " + uri + " // " + " ---- not Exist");
		}
	}
	
}
