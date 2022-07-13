using System;

public class Link
{
	public Link()
	{
		this.url = "https://api.vworld.kr/req/image";
		this.service = "?service=image";
		this.version = "&version=2.0";
		this.request = "&request=getmap";
		this.key = "&key=5EF404F7-CBC9-380B-86A1-712A9A86225F";
		this.format = "&format=png";
		this.baseMap = "&basemap=GRAPHIC";
		this.center = "&center=126.9833,37.55912";
		this.crs = "&crs=epsg:4326";
		this.zoom = "&zoom=8";
		this.size = "&size=400,400";
	}

	override public string ToString()
	{
		return url + service + version + request + key + format +
			baseMap + center + crs + zoom + size;
	}

	string url;
	string service;
	string version;
	string request;
	string key;
	string format;
	string baseMap;
	public string center;
	string crs;
	string zoom;
	string size;
}
