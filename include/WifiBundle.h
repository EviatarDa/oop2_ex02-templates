#pragma once
const int WIFI = 3;
class WifiBundle
{
public:
	int getSize() { return WIFI; }
	std::string getVal(int index) { return m_wifibundle[index]; }
	int Min() { return 1; };
	int Max() { return WIFI; };

private:
	std::string m_wifibundle[WIFI] = { "None ", "Basic " ,"Extended" };

};
