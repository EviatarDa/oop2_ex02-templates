#pragma once
#include "Validators.h"

class NoDigitValidator : public Validators<std::string>
{
public:
	NoDigitValidator();
	bool checkValidation(const std::string& name);

private:

};


