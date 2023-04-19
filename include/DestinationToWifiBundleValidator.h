#pragma once
#include "FormValidator.h"

template <class T1, class T2>
class DestinationToWifiBundleValidator : public FormValidator
{
public:
	DestinationToWifiBundleValidator(T1*, T2*);
	bool checkValidation() override;

private:
	T1* m_destination;
	T2* m_wifi;
};

template<class T1, class T2>
inline DestinationToWifiBundleValidator<T1, T2>::DestinationToWifiBundleValidator(T1* destination, T2* wifi)
	:m_destination(m_destination), m_wifi(wifi)
{
}

template<class T1, class T2>
inline bool DestinationToWifiBundleValidator<T1, T2>::checkValidation()
{


	
	return false;
}
