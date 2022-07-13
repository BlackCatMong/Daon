using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.SubsystemsImplementation;


public class SupportTest : MonoBehaviour
{
	public ARSession session;
	public ARCameraManager aRCameraManager;
	// Start is called before the first frame update
	

    // Update is called once per frame
    void Update()
    {
        
    }

	IEnumerator Start()
	{
		log();

		//session.enabled = false;

		if ((ARSession.state == ARSessionState.None) ||
			(ARSession.state == ARSessionState.CheckingAvailability))
		{
			Debug.Log("none, CheckingAvailability");
			yield return ARSession.CheckAvailability();
		}

		if (ARSession.state == ARSessionState.Unsupported)
		{
			// Start some fallback experience for unsupported devices
			Debug.Log("Unsupported");
		}
		else
		{
			// Start the AR session
			Debug.Log("support ");
			//session.enabled = true;
		}
	}

	public void log()
	{
		//aRCameraManager.enabled = false;
		//Camera.main.enabled = false;
		//session.enabled = false;
		//aRSession.subsystem.Stop();//안됨 -> init 에서 걸리는듯.

		if (session.subsystem != null)
			Debug.Log("not null");
		else
			Debug.Log("null");

		SubsystemDescriptorWithProvider xRSessionSubsystemDescriptor = session.descriptor;
		XRSessionSubsystemDescriptor rSessionSubsystemDescriptor = session.subsystem.subsystemDescriptor;



		//Debug.Log(session.subsystem.sessionId);		//00000-0000-000-0000
		//Debug.Log(xRSessionSubsystemDescriptor.id);	//ARCore - Session
		//Debug.Log(rSessionSubsystemDescriptor.id);	//ARCore - Session
		//Debug.Log(session.GetInstanceID());			//3958

		//session.subsystem.Reset();

		//session.subsystem.Start(); //여기서 프로그램 터짐 ...cycleManager
		session.enabled = true;
		//XRSessionSubsystemDescriptor xRSessionSubsystemDescriptor = aRSession.subsystem.subsystemDescriptor;



	}
}
