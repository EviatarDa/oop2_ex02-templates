#pragma once
#include "Validators.h"


template <class T>
class RangeValidator : public Validators
{
public:
	RangeValidator(int, int);

private:
	int m_max, m_min;
};

template<class T>
inline RangeValidator<T>::RangeValidator(int max, int min)
	:m_max(max),m_min(min)
{
}
