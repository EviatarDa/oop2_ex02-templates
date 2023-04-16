#pragma once
#include <string>
#include "BaseField.h"
#include "Validators.h"

template <class T>
class Field: public BaseField
{
public:
	Field(std::string);
	void addValidator(Validators*);
	// operator <<
	//operator>>
private:
	std::string  m_question;
	T m_info;
	Validators* m_validator;

};

template<class T>
inline Field<T>::Field(std::string question)
	:m_question(question)
{
}

template<class T>
inline void Field<T>::addValidator(Validators* p)
{
	m_validator = p;
}


