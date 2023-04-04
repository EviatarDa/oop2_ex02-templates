#pragma once 
const int FLIGHTS = 3;
class FlightTimes
{
public:
	int getSize() { return FLIGHTS; }
	std::string getVal(int index) { return m_flighttimes[index]; }
	
private:
	std::string m_flighttimes[FLIGHTS] = { "Morning/Noon", "After-Noon/Evening" ,"Night" };

};

