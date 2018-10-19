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
Iterator<I>::Iterator()
{

}

template<typename I>
Iterator<I>::Iterator(nodeType<I>* ptr)
{
	current = *ptr;
}

template<typename I>
I Iterator<I>::operator*()
{
	return current->info;
}

template<typename I>
Iterator<I> Iterator<I>::operator++()
{
	current = next;
	return;
}

template<typename I>
const bool Iterator<I>::operator==(const Iterator<I>&)
{
	return false;
}

template<typename I>
const bool Iterator<I>::operator!=(const Iterator<I>&)
{
	return false;
}
