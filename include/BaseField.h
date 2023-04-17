#pragma once


class BaseField
{
public:
	virtual void readData()=0 ;
	virtual bool fieldIsValid() = 0;

	virtual void getData() const = 0;

private:

};
