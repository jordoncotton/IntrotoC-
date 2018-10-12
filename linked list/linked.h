#pragma once
#include <iostream>
#include "nodetype.h"

template <typename T>

class linked
{
protected:
	int count;
	node<T> *first;
	node<T> *last;

public:
	const T & operator = (linked & linkedList);
	void initializeList();
	bool isEmptyList();
	void print();
	int length();
	void destroyList();

	int front();
	int back();
	const bool search(const linked & linkedList);

	void insertFirst(const T & linkedList) = 0;
	void insertLast(const T & linkedList) = 0;
	void deleteNode(const T & linkedList) = 0;

	int begin(const T & linkedListIterator);
	int end(const T & linkedListIterator);

	linked();
	linked(const linked <T> &);
	~linked();
private:
	void copyList(const T & linkedList);
};