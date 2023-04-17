#include "NoDigitValidator.h"

#pragma once


bool NoDigitValidator::checkValidation(const std::string& name)
{
	for (int i = 0; i < name.size(); ++i)
	{
		if (isdigit(name[i]))
			return false;
	}
	return true;
}
                                                                     