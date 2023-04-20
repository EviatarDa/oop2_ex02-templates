#pragma once 
#include <string>

const int DESTINATIONS = 5;
class DestinationNames
{
public:
	int getSize() { return DESTINATIONS; }
	std::string getVal(int index) { return m_destinations[index]; }
	int Min() { return 1; };
	int Max() { return DESTINATIONS; };
	

private:
	std::string m_destinations[DESTINATIONS] = { "Rome ", "Prague " ,"New York ",  "India ", "Thailand" };

};

