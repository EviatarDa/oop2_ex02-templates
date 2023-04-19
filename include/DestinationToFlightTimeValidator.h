#pragma once
#include "FormValidator.h"

template <class T1, class T2>
class DestinationToFlightTimeValidator : public FormValidator
{
public:
	DestinationToFlightTimeValidator(T1*, T2*);
	bool checkValidation() override;


private:
	T1* m_destination;
	T2* m_time;
};

template<class T1, class T2>
inline DestinationToFlightTimeValidator<T1, T2>::DestinationToFlightTimeValidator(T1* destination, T2* time)
	:m_destination (m_destination), m_time(time)
{
}

template<class T1, class T2>
inline bool DestinationToFlightTimeValidator<T1, T2>::checkValidation()
{
	return false;
}
