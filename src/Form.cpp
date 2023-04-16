#pragma once
#include <string>
#include "Form.h"

void Form::addField(BaseField* field)
{
	m_fields.push_back(field);
}

void Form::addValidator(FormValidator* validator)
{
	m_validators.push_back(validator);
}

void Form::fillForm()
{
	for (auto field = 0; field < m_fields.size(); field++)
	{
		m_fields[field]->readData();
	}
}
