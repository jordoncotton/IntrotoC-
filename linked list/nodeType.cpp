#include "nodeType.h"

template<typename type>
inline HEADACHE<type>::HEADACHE()
{

}

template<typename type>
HEADACHE<type>::HEADACHE(HEADACHE<type>)
{

}

template<typename type>
type HEADACHE<type>::operator*()
{
	return type();
}

template<typename type>
HEADACHE<type> HEADACHE<type>::operator++()
{
	return ;
}

template<typename type>
const bool HEADACHE<type>::operator==(const HEADACHE<type>&)
{
	return false;
}

template<typename type>
const bool HEADACHE<type>::operator!=(const HEADACHE<type>&)
{
	return false;
}
