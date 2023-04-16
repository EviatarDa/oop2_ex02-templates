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

void Form::fillForm()
{
	for (auto field = 0; field < m_basefields.size(); field++)
	{
		m_basefields[field]->readData();
	}
}
