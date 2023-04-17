#pragma once
#include <string>
#include <iostream>
#include "BaseField.h"
#include "Validators.h"

template <class T>
class Field: public BaseField
{
public:
	Field(std::string);
	~Field() = default;
	void addValidator(Validators<T>*);
	virtual void readData() override;
	virtual bool fieldIsValid() override;
	virtual void getData() const {};
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
	std::cout << m_question;
	std::cin >> m_info;
	if (fieldIsValid())
		std::cout << m_info;
	else
		std::cin >> m_info;
}

//template<class T>
//inline void Field<T>::readData()
//{
//	std::cout << m_question;
//	std::cin >> m_info;
//	if (fieldIsValid())
//		std::cout << m_info;
//	else
//		std::cin >> m_info;
//
//}

template<class T>
inline bool Field<T>::fieldIsValid() 
{
	return m_validator->checkValidation(m_info);
}