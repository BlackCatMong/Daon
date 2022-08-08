using System.Collections;
using System.Collections.Generic;
using UnityEditor.Recorder;
using UnityEditor.Recorder.Input;
using UnityEngine;
using UnityEngine.Playables;

public class Recording : MonoBehaviour
{

	RecorderControllerSettings setting;
	RecorderController recorderController;
	MovieRecorderSettings movieRecorderSettings;
	//여기서 생성하면 Error
	int takeNum = 0;
	string saveName = @"TestVideo";

	// Start is called before the first frame update
	void Start()
    {
		RecordingSetting();
	}

    // Update is called once per frame
    void Update()
    {
		ReStart();
	}
	public void RecordingSetting()
	{
		setting = ScriptableObject.CreateInstance<RecorderControllerSettings>();
		setting.FrameRate = 30f;
		//setting.SetRecordModeToManual();
		int recSec = 5;
		//setting.SetRecordModeToSingleFrame(10);
		//setting.SetRecordModeToTimeInterval(0.5f, 2f);
		setting.SetRecordModeToFrameInterval(0, (int)setting.FrameRate * recSec);

		movieRecorderSettings = ScriptableObject.CreateInstance<MovieRecorderSettings>();
		movieRecorderSettings.ImageInputSettings = new GameViewInputSettings() { OutputWidth = 640, OutputHeight = 480 };
		//movieRecorderSettings.AudioInputSettings.PreserveAudio = true; // 오디오 필요없음..
		movieRecorderSettings.OutputFormat = MovieRecorderSettings.VideoRecorderOutputFormat.MP4;
		movieRecorderSettings.OutputFile = saveName + takeNum.ToString();

		movieRecorderSettings.Enabled = true;
		setting.AddRecorderSettings(movieRecorderSettings);
		recorderController = new RecorderController(setting);
		recorderController.PrepareRecording();
		recorderController.StartRecording();
		Debug.Log("StartRecording");
	}

	void ReStart()
	{
		if(recorderController != null && !recorderController.IsRecording())
		{
			takeNum++;
			movieRecorderSettings.OutputFile = saveName + takeNum.ToString();
			Debug.Log(movieRecorderSettings.OutputFile);
			recorderController.PrepareRecording();
			recorderController.StartRecording();
			if (takeNum > 10)
				takeNum = 0;
		}
	}
}
