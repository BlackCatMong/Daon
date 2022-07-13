
using UnityEngine;
using Google.XR.ARCoreExtensions;
using System;
using UnityEngine.XR.ARFoundation;
using System.IO;
using Unity.Collections;
using UnityEngine.XR.ARSubsystems;
using System.Collections;
using System.Collections.Generic;

public class Play : MonoBehaviour
{
	public ARPlaybackManager playbackManager;
	bool setPlatBackDataset = false;

	public ARCoreExtensions aRCoreExtensions;

	public ARSession arSession;
	float timeout = 0.0f;
	string path;

	public GameObject canvas;

	public GameObject arSessionOrigin;

	XRSessionSubsystem aRSessionSubsystem;

	public ARCameraManager cameraManager;

	XRCpuImage cpuImage;

	Guid guid;

	Track track = new Track();

	List<TrackData> list;
	private XRCameraParams cameraParams;

	// Start is called before the first frame update
	void Start()
    {

		//arSession.enabled = false;
		path = Application.persistentDataPath + "/dataset6.mp4";

		//CameraTest();
		ArSubSystemTest();
		LogTest();
		//cameraManager.TryAcquireLatestCpuImage(out cpuImage);
		//cpuImage.GetPlane(0).data.ToString();
	}

	// Update is called once per frame
	void Update()
    {
		

		if (setPlatBackDataset)
		{
			
			Uri datasetUri = new Uri(path);
			if (File.Exists(datasetUri.AbsolutePath))
			{
				Debug.Log("file exist");
				FileInfo fileInfo = new FileInfo(datasetUri.AbsolutePath);
				long fileSize = fileInfo.Length;
				Debug.Log("file size -> " + fileSize.ToString());
			}

			PlaybackResult result = playbackManager.SetPlaybackDatasetUri(datasetUri);

			if (result == PlaybackResult.ErrorPlaybackFailed || result == PlaybackResult.SessionNotReady)
			{
				Debug.Log(result.ToString());
				timeout -= Time.deltaTime;
			}
			else
			{
				if (result == PlaybackResult.OK)
				{
					Debug.Log("play back result -> " + result.ToString());
					arSession.enabled = true;
					setPlatBackDataset = false;
				}
				timeout = -1f;
			}

			if (timeout < 0.0f)
			{
				setPlatBackDataset = false;
			}
		}
    }

	public void ButtonClickStart()
	{
		PlayBackDataset();
	}
	public void ButtonClickStop()
	{
		arSession.Reset();
		arSession.enabled = true;
	}
	void PlayBackDataset()
	{

		setPlatBackDataset = true;
		arSession.enabled = false;
		timeout = 100.0f;
		arSessionOrigin.GetComponent<ARPlaneManager>().enabled = true;
		//canvas.gameObject.SetActive(false);
	}

	void CameraTest()
	{
		Allocator allocator = new Allocator();
		NativeArray<XRCameraConfiguration> cameraConfig = aRCoreExtensions.CameraManager.GetConfigurations(allocator);
		//Debug.Log("allocator -> " + allocator.ToString());
		Debug.Log("nativeArray -> " + cameraConfig.ToString());
		if (aRCoreExtensions.CameraManager.currentConfiguration != null)
			Debug.Log("aRCoreExtensions.CameraManager.currentConfiguration => " + aRCoreExtensions.CameraManager.currentConfiguration.ToString());
		else
			Debug.Log("arcoreExtensions cameramanager null");
	}

	void ArSubSystemTest()
	{
		Allocator allocator = new Allocator();
		aRSessionSubsystem = arSession.subsystem;
		Debug.Log(" frameRate -> " + aRSessionSubsystem.frameRate.ToString());
		Debug.Log(" configurationChooser -> " + aRSessionSubsystem.configurationChooser.ToString());
		Debug.Log(" GetAvailabilityAsync -> " + aRSessionSubsystem.GetAvailabilityAsync().ToString());
		//Debug.Log(" GetConfigurationDescriptors -> " + aRSessionSubsystem.GetConfigurationDescriptors(allocator).ToString()); //NULL..

		Debug.Log(" requestedFeatures -> " + aRSessionSubsystem.requestedFeatures.ToString());
	}
	public void LogTest()
	{
		//Guid guid = Guid.NewGuid();
		Guid guid = Guid.Parse("F83CD5DF-E68F-478C-BDD5-BF85DC6CBAB1"); 
		Debug.Log("guid -> " + guid);
		list = playbackManager.GetUpdatedTrackData(guid);
		Debug.Log(list);
		Debug.Log(list.Count);

		list.ForEach(test =>
		{
			Debug.Log(test.Data.GetEnumerator().ToString());
			Debug.Log(test.FrameTimestamp);
			Debug.Log(test.Data);
		});
		


		XRCameraFrame xRCameraFrame;
		cameraParams = new XRCameraParams();
		cameraParams.zFar = Camera.main.farClipPlane;
		cameraParams.zNear = Camera.main.nearClipPlane;
		cameraParams.screenWidth = Screen.width;
		cameraParams.screenHeight = Screen.height;
		cameraParams.screenOrientation = Screen.orientation;

		if (cameraManager.subsystem.TryGetLatestFrame(cameraParams, out xRCameraFrame))
		{
			Debug.Log("Try Get Lastes Frame Success");
			Debug.Log(xRCameraFrame.properties);
		}
		else
			Debug.Log("FAIL ..... ");
	}
}
