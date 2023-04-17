#pragma once
#include <vector>
#include <memory>
#include <string>
# include <iostream>
#include "Field.h"
#include "FormValidator.h"

class Form
{
public:
	void addField(BaseField*);
	void addValidator(FormValidator*);
	bool validateForm() { return true; } // TODO 
	void fillForm();
	

private:
	std::vector<BaseField*> m_basefields;
	std::vector<FormValidator*> m_validators;

};

std::ostream& operator << (std::ostream& os, const Form& form);