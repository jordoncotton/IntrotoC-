#pragma once
#include <iostream>


template <typename type>

class HEADACHE
{
public:
	HEADACHE();
	HEADACHE(HEADACHE <type>);

	type operator*();
	HEADACHE<type> operator++();
	const bool operator==(const HEADACHE<type>&);
	const bool operator!=(const HEADACHE<type>&);

private:
	*current HEADACHE<type>;
};


