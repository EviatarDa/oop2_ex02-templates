#pragma once
#include <iostream>
#include <string>

template <class T >
class ValuesToNames 
{
public:
	std::string valuesAndNames(); // prints the message of the num and the value 
	//opertor << print the value in this number
	//opertor>> get a number
	std::string GetOption();
	void SetOption(int);
	

private:
	T m_name;
	int m_value = 0; //the option that the user choose
};


template<class T>
inline std::string ValuesToNames<T>::valuesAndNames()
{
	std::string string_msg = "(";
	for (int index = 0; index < m_name.getSize(); index++)
	{
		string_msg += std::to_string(index + 1) + " -" + m_name.getVal(index) + " ";
	}
	string_msg += ")";
	return string_msg;
}

template<class T>
inline std::string ValuesToNames<T>::GetOption() 
{
	return m_name.getVal(m_value-1);
}

template<class T>
inline void ValuesToNames<T>::SetOption(int value)
{
	m_value = value;
}


template <class T >
std::ostream& operator << (std::ostream& os,  ValuesToNames<T> & val2name)
{
	os << val2name.GetOption();
	return os;
}

template <class T >
std::istream& operator >> (std::istream& is,  ValuesToNames<T>& val2name)
{
	int num;
	is >> num;
	val2name.SetOption(num);
	return is;
}