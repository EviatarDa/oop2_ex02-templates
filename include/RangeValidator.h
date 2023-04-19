#pragma once
#include "Validators.h"


template <class T>
class RangeValidator : public Validators <T>
{
public:
	RangeValidator(int, int);
	bool checkValidation(const T& ) override;

private:
	int m_max, m_min;
};

template<class T>
inline RangeValidator<T>::RangeValidator(int max, int min)
	:Validators<T>("Out of range"), m_max(max), m_min(min)
{
}


template<typename T>
bool RangeValidator<T>::checkValidation(const T& value)
{
	return false; //(value >= m_min && value <= m_max);
}