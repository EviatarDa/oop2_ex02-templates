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
	:m_destination(destination), m_wifi(wifi)
{
}

template<class T1, class T2>
inline bool DestinationToWifiBundleValidator<T1, T2>::checkValidation()
{
	//(1 - Morning/Noon, 2 - After-Noon/Evening, 3 - Night)
	//(1 - Rome, 2 - Prague, 3 - New York, 4 - India, 5 - Thailand)
	int wifi = m_wifi->getInfo().getValue();
	int destination = m_destination->getInfo().getValue();
	//if newyork - 3 
	//if india or thiland- 1 or 2 
	switch (wifi)
	{
	case NONE:
	{
		return true;
		break;
	}
	case BASIC:
	{
		if (destination == NEW_YORK)
		{
			return false;
		}
		break;
	}

	case EXTENDED:
	{
		if (destination == INDIA || destination == THAILAND)
		{
			return false;
		}
		break;
	}
	default:
		return true;
		break;
	}

	return true;

}
