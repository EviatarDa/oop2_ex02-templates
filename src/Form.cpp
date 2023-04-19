#pragma once
#include <string>
#include "Form.h"

void Form::addField(BaseField* field)
{
	m_basefields.push_back(field);
}

void Form::addValidator(FormValidator* validator)
{
	m_validators.push_back(validator);
}

bool Form::validateForm()
{
	bool flag = true;
	for (int field = 0; field < m_basefields.size(); field++)
	{
		if (!m_basefields[field]->fieldIsValid())
		{
			 flag = false;
		}
	}
	bool one = m_validators[0]->checkValidation();
	bool two = m_validators[1]->checkValidation();

	return flag;
}

void Form::fillForm()
{
	for (auto field: m_basefields)
		if(!field->getValid())
			field->readData();
}

int Form::getFieldsNum() const
{
	return m_basefields.size();
}

 BaseField* Form::getField(int field) const
{
	return m_basefields[field];
}

std::ostream& operator<<(std::ostream& os,  Form& form)
{
	for (auto field = 0; field < form.getFieldsNum(); field++ )
	{
		form.getField(field)->printField(os);
	}
	return os;
}
