#pragma once 
const int FLIGHTS = 3;
class FlightTimes
{
public:
	const int getSize() const { return FLIGHTS; }
	const std::string getVal(int index) const { return m_flighttimes[index]; }
	const int Min() const { return 1; };
	const int Max() const { return FLIGHTS; };
	
private:
	std::string m_flighttimes[FLIGHTS] = { "Morning/Noon ", "After-Noon/Evening " ,"Night" };

};

