#pragma once
#include "Validators.h"

class NoDigitValidator : public Validators<std::string>
{
public:
	bool checkValidation(const std::string& name);

private:
	//std::string error();
};


