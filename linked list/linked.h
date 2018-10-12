#pragma once
#include <iostream>
#include "nodeType.h"

template <typename T>

class IMFUCKED
{
protected:
	int count;
	HEADACHE<T> *first;
	HEADACHE<T> *last;

public:
	const T & operator = (IMFUCKED & linkedList);
	void initializeList();
	bool isEmptyList();
	void print();
	int length();
	void destroyList();

	int front();
	int back();
	const bool search(const IMFUCKED & linkedList);

	void insertFirst(const T & linkedList) = 0;
	void insertLast(const T & linkedList) = 0;
	void deleteNode(const T & linkedList) = 0;

	int begin(const T & linkedListIterator);
	int end(const T & linkedListIterator);

	IMFUCKED();
	IMFUCKED(const IMFUCKED <T> &);
	~IMFUCKED();
private:
	void copyList(const T & linkedList);
};