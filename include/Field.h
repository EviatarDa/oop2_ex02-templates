#pragma once
#include <string>
#include "Fields.h"

template <class T>
class Field: public Fields
{
public:
	Field(std::string);

private:
	std::string  m_question;
	T m_info;

};

template<class T>
inline Field<T>::Field(std::string question)
	:m_question(question)
{
}

