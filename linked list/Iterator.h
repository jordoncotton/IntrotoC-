#pragma once
#include "node.h"

template <typename I>

class Iterator
{
public:
	Iterator();
	Iterator(nodeType<I>*ptr);
	I operator*();
	Iterator operator++();

	const bool operator==(const Iterator <I>&);
	const bool operator!=(const Iterator <I>&);

private:
	nodeType<I>* current;
};

template<typename I>
inline Iterator<I>::Iterator()
{
}

template<typename I>
inline Iterator<I>::Iterator(nodeType<I>* ptr)
{
	
}

template<typename I>
Iterator<I> Iterator<I>::operator*()
{
	current = current->next;
	return *this;
}

template<typename I>
Iterator<I> Iterator<I>::operator++()
{
	return;
}

template<typename I>
inline const bool Iterator<I>::operator==(const Iterator<I>&)
{
	return false;
}

template<typename I>
inline const bool Iterator<I>::operator!=(const Iterator<I>&)
{
	return false;
}
