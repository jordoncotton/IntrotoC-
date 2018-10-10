#pragma once
#include <iostream>

class T
{
public:
	int count;

	T*first;
	T*last;

	const T & operator = (T & linkedList);

	void initializeList();
	const bool isEmpty();
	const void print();
	const int length();
	void destroyList();

	int front();
	int back();
	const bool search();

	const void insertFirst();
	const void insertLast();

	const void deleteNode();

	
};