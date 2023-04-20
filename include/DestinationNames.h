#pragma once 
#include <string>

const int DESTINATIONS = 5;

class DestinationNames
{
public:
	const int getSize() const { return DESTINATIONS; }
	const std::string getVal(int index) const { return m_destinations[index]; }
	int Min() const { return 1; } ;
	int Max() const { return DESTINATIONS; };

private:
	std::string m_destinations[DESTINATIONS] = { "Rome ", "Prague " ,"New York ",  "India ", "Thailand" };

};

