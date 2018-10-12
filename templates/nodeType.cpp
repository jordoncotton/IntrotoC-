#include "nodeType.h"

template<typename type>
inline HEADACHE<type>::linkedListIterator()
{

}

template<typename type>
HEADACHE<type>::linkedListIterator(HEADACHE<type>)
{

}

template<typename type>
type HEADACHE<type>::operator*()
{
	return type();
}

template<typename type>
linkedlistIterator<type> HEADACHE<type>::operator++()
{
	return linkedlistIterator<type>();
}

template<typename type>
const bool HEADACHE<type>::operator==(const linkedListIterator<type>&)
{
	return false;
}

template<typename type>
const bool HEADACHE<type>::operator!=(const linkedListIerator<type>&)
{
	return false;
}
