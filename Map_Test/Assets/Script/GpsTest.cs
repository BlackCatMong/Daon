using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
public class GpsTest : MonoBehaviour
{
	//public TextMeshProUGUI m_Coordinates;
	public TMP_Text m_Coordinates;
	public RawImage m_Map;

	Link m_Link;
	WWW www;

	string url;
	string service;
	string version;
	string request;
	string key;
	string format;
	string baseMap;
	//public string center { set { center = "&center = " + value; } get { return center; } }
	string center;
	string crs;
	string zoom;
	string size;
	string marker;
	// Start is called before the first frame update
	void Start()
    {
		url = "https://api.vworld.kr/req/image";
		service = "?service=image";
		version = "&version=2.0";
		request = "&request=getmap";
		key = "&key=5EF404F7-CBC9-380B-86A1-712A9A86225F";
		format = "&format=png";
		baseMap = "&basemap=GRAPHIC";
		center = "&center=127.9833,37.55912";
		crs = "&crs=epsg:4326";
		zoom = "&zoom=18";
		size = "&size=1000,1000";
		marker = "&marker=label:현재위치|point:127.9833 37.55912";
		//m_Link = new Link();
		Debug.Log("Link => " + StrLink());
		InvokeRepeating("GetMap", 0.01f, 1.0f);
	}

    // Update is called once per frame
    void Update()
    {
		m_Coordinates.text = "LAT : " + Gps.Instance.m_Latitude.ToString() + "\n" + "Long : " + Gps.Instance.m_Longitude.ToString();
		string long_ = Gps.Instance.m_Longitude.ToString();
		string lat = Gps.Instance.m_Latitude.ToString();
		string Coord = long_ + "," + lat;
		center = "&center=" + Coord;
		Coord = long_ + " " + lat;
		marker = "&marker=label:현재위치|point:" + Coord;
		
	}
	public string StrLink()
	{
		return url + service + version + request + key + format +
			baseMap + center + crs + zoom + size + marker;
	}

	void GetMap()
	{
		Debug.Log("Get Map coord -> " + StrLink());
		WWW www = new WWW(StrLink());
		m_Map.texture = www.texture;
		//Invoke("GetMap", 1.0f);
	}
}
