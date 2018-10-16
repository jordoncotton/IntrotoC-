#pragma once
#include <iostream>
#include "node.h"

template <typename I>

class Iterator
{
public:
	Iterator();
	Iterator(nodeType<I>*ptr);
	I operator*();
	Iterator operator++();
	const bool operator==(const Iterator <I>&();
	const bool operator!=(const Iterator <I>&();

private:
	nodeType<I>* current;
};

template<typename I>
inline Iterator<I>::Iterator()
{
	current = this->I operator*;
}

template<typename I>
inline Iterator<I>::Iterator(nodeType<I>* ptr)
{
	current = ptr;
}

template<typename I>
Iterator<I>::operator*()
{
	current = current->next;
	return *this;
}

template<typename I>
Iterator Iterator<I>::operator++()
{
	return Iterator operator++;
}