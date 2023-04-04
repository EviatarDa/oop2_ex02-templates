#pragma once

template <class T >
class ValuesToNames 
{
public:
	std::string valuesAndNames(); // prints the message of the num and the value 
	//opertor << print the value in this number
	//opertor>> get a number

private:
	T m_options;
	int m_chosenOption; //the option that the user choose
};

template<class T>
inline std::string ValuesToNames<T>::valuesAndNames()
{
	std::string string_msg = "(";
	for (int index = 0; index < m_options.getSize(); index++)
	{
		string_msg +=  std::to_string(index + 1) + " -" + m_options.getVal(index) ;
	}
	string_msg += " )";
	return string_msg;
}
