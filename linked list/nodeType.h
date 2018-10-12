#pragma once
#include <iostream>


template <typename type>

class node
{
public:
	node();
	node(node <type>);

	type operator*();
	node<type> operator++();
	const bool operator==(const node<type>&);
	const bool operator!=(const node<type>&);

private:
	*current node <type>;
};


