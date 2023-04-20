#pragma once
const int WIFI = 3;
class WifiBundle
{
public:
	const int getSize() const { return WIFI; }
	const std::string getVal(int index) const { return m_wifibundle[index]; }
	const int Min() const { return 1; };
	const int Max() const { return WIFI; };

private:
	std::string m_wifibundle[WIFI] = { "None ", "Basic " ,"Extended" };

};
