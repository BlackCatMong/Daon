using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Gps : MonoBehaviour
{

	public static Gps Instance { set; get; }

	public float m_Latitude; //위도
	public float m_Longitude; //경도
    // Start is called before the first frame update
    void Start()
    {
		Instance = this;
		DontDestroyOnLoad(gameObject);
		StartCoroutine(StartLocationService());
		InvokeRepeating("GetGpsData", 0.1f, 5.0f);
		
    }

    // Update is called once per frame
    void Update()
    {
	}

	private IEnumerator StartLocationService()
	{
		if(!Input.location.isEnabledByUser)
		{
			Debug.Log("User has not enabled GPS");
			yield break;
		}

		Input.location.Start(0.5f);
		int maxWait = 20;
		while(Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
		{
			yield return new WaitForSeconds(1);
			maxWait--;
		}

		if(maxWait <= 0)
		{
			Debug.Log("Timed Out");
			yield break;
		}

		if(Input.location.status == LocationServiceStatus.Failed)
		{
			Debug.Log("Unable to determin device location");
			yield break;
		}
		yield break;
	}
	void GetGpsData()
	{
		if (Input.location.status == LocationServiceStatus.Running)
		{
			m_Latitude = Input.location.lastData.latitude;
			m_Longitude = Input.location.lastData.longitude;
			Debug.Log(m_Latitude + "---" + m_Longitude);
		}
		else
		{
			Debug.Log("GPS Not Running");
		}
	}
}
