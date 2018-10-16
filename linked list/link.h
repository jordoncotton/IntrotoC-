#pragma once
#include <iostream>
#include "node.h"
#include "Iterator.h"

template <typename L>

class link
{
public:
	int count;
	nodeType *first <L>;
	nodeType *last <L>;

	operator= (const link <L>&);
	void initializedList();
	const bool isEmptyList();
	const void print();
	const int length();
	void destroyList();
	L front();
	L back();
	bool search(const L&) = 0;

	void insertFirst(const L&) = 0;
	void insertLast(const L&) = 0;
	void deleteNode(const L&) = 0;
	
	Iterator<L> begin();
	Iterator<L> end();

	link();
	link(const link<L>&);
	~link();

private:
	void copyList(const link<L>&);
};

template<typename L>
inline link<L>::operator=(const link<L>&)
{
	*current = nullptr;
}

template<typename L>
void link<L>::initializedList()
{
	copyList = 
}

template<typename L>
const bool link<L>::isEmptyList()
{
	return false;
}

template<typename L>
const void link<L>::print()
{
	return void();
}

template<typename L>
const int link<L>::length()
{
	return 0;
}

template<typename L>
void link<L>::destroyList()
{
}

template<typename L>
L link<L>::front()
{
	return L();
}

template<typename L>
L link<L>::back()
{
	return L();
}

template<typename L>
inline link<L> link<L>::begin()
{
	return link<L>();
}

template<typename L>
inline link<L> link<L>::end()
{
	return link<L>();
}

template<typename L>
inline link<L>::link()
{
}

template<typename L>
inline link<L>::link(const link<L>&)
{
}

template<typename L>
inline link<L>::~link()
{
}

template<typename L>
inline void link<L>::copyList(const link<L>&)
{
}