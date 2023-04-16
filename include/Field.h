#pragma once
#include <string>
#include "BaseField.h"
#include "Validators.h"

template <class T>
class Field: public BaseField
{
public:
	Field(std::string);
	void addValidator(Validators<T>*);
	void readData() override;
	bool fieldIsValid() const override;
	// operator <<
	//operator>>
private:
	std::string  m_question;
	T m_info;
	Validators<T>* m_validator;

};

template<class T>
inline Field<T>::Field(std::string question)
	:m_question(question)
{
}

template<class T>
inline void Field<T>::addValidator(Validators<T>* p)
{
	m_validator = p;
}

template<class T>
inline void Field<T>::readData()
{
	cout << m_question;
	cin >> m_info;
	if (fieldIsValid)
		cout << m_info;
	else
		;//////TOOD

}

template<class T>
inline bool Field<T>::fieldIsValid() const
{
	return m_validator->checkValidation(m_info);
}