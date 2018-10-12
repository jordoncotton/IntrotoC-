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