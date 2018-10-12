#include "linked.h"

template<typename T>
inline const T & linked<T>::operator=(linked & linkedList)
{
	return linked;
	// TODO: insert return statement here
}

template<typename T>
inline void linked<T>::initializeList()
{
}

template<typename T>
inline bool linked<T>::isEmptyList()
{
	return false;
}

template<typename T>
inline void linked<T>::print()
{
}

template<typename T>
inline int linked<T>::length()
{
	return 0;
}

template<typename T>
inline void linked<T>::destroyList()
{
}

template<typename T>
inline int linked<T>::front()
{
	return 0;
}

template<typename T>
inline int linked<T>::back()
{
	return 0;
}

template<typename T>
inline const bool linked<T>::search(const linked &linkedList)
{
	return false;
}

template<typename T>
inline int linked<T>::begin(const T & linkedListIterator)
{
	return 0;
}

template<typename T>
inline int linked<T>::end(const T & linkedListIterator)
{
	return 0;
}

template<typename T>
inline linked<T>::linked()
{
}

template<typename T>
inline linked<T>::linked(const linked<T>&)
{
}

template<typename T>
inline linked<T>::~linked()
{
}

template<typename T>
inline void linked<T>::copyList(const T & linkedList)
{
}
