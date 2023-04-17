#pragma once
#include <string>

 template <class T>
class Validators
{
public:
	virtual bool checkValidation(const T& val) = 0;

private:

};

