#pragma once

class BaseField
{
public:
	virtual void readData()=0 ;
	virtual bool fieldIsValid() = 0;

private:

};
