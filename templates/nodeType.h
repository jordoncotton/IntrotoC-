#pragma once
#include <iostream>


template <typename type>

class HEADACHE
{
public:
	linkedListIterator();
	linkedListIterator(HEADACHE <type>);

	type operator*();
	linkedlistIterator<type> operator++();
	const bool operator==(const linkedListIterator<type>&);
	const bool operator!=(const linkedListIerator<type>&);

private:
	*current HEADACHE<type>;
};


