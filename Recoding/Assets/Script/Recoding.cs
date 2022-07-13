using Google.XR.ARCoreExtensions;
using UnityEngine;
using System;
using System.IO;
using System.Collections.Generic;
using System.Text;

public class Recoding : MonoBehaviour
{
	ARCoreRecordingConfig aRCoreRecordingConfig;
	public ARRecordingManager aRRecordingManager;
	Uri datasetUri;
	string path;

	Track track;

	Guid guid = new Guid();
	byte[] metaData;
	// Start is called before the first frame update
	void Start()
    {
		metaData = Encoding.Default.GetBytes("test !!!!!!!!!!!!!!!");
		guid = Guid.Parse("F83CD5DF-E68F-478C-BDD5-BF85DC6CBAB1");
		track = new Track();
		track.Id = guid;
		track.Metadata = metaData;
		//track.MimeType = "text/csv";
		List<Track> tracks = new List<Track>();
		tracks.Add(track);

		path = Application.persistentDataPath + "/dataset6.mp4";
		datasetUri = new Uri(path);
		aRCoreRecordingConfig = ScriptableObject.CreateInstance<ARCoreRecordingConfig>();
		aRCoreRecordingConfig.Mp4DatasetUri = datasetUri;
		aRCoreRecordingConfig.AutoStopOnPause = true;
		aRCoreRecordingConfig.Tracks = tracks;

	
	}

	// Update is called once per frame
	void Update()
    {
		
	}
	public void BtnClickStop()
	{
		RecordingResult resultStart = aRRecordingManager.StartRecording(aRCoreRecordingConfig);
		if (resultStart == RecordingResult.OK)
		{
			RecordingResult result = aRRecordingManager.StopRecording();
			Debug.Log("stop -> " + result);

			TrackTest();
		}
		else
			Debug.Log(resultStart);
	}

	public void BtnClickStart()
	{
		
		
		//aRRecordingManager.RecordTrackData(guid, metaData);

		Debug.Log(track.Metadata);

		RecordingResult result = aRRecordingManager.StartRecording(aRCoreRecordingConfig);

		Debug.Log("start -> " + result);
	}

	public void TrackTest()
	{
		RecordingResult result = aRRecordingManager.RecordTrackData(guid, metaData);
		Debug.Log("recording result => " + result);
	}
}