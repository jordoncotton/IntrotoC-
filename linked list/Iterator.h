#pragma once
#include <iostream>
#include "node.h"

template <typename I>

class Iterator
{
	Iterator();
	Iterator(nodeType<I>);
	I operator*();
	Iterator operator++();
	const bool operator==(const Iterator <I>&();
	const bool operator!=(const Iterator <I>&();
};