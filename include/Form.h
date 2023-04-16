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
	//validateForm()
	void fillForm();
	//operator <<

private:
	std::vector<BaseField*> m_fields;
	std::vector<FormValidator*> m_validators;

};

