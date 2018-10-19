#pragma once
#include "Iterator.h"

template <typename L>
class link
{
public:
	int count;
	nodeType <L> *first;
	nodeType <L> *last;

	Iterator<L> operator= (const link <L>&);
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
	
	Iterator<L>begin();
	Iterator<L>end();

	link();
	link(const link<L>&);
	~link();

private:
	void copyList(const link<L>&);
};

template<typename L>
Iterator<L>link<L>::operator=(const link<L>&)
{
	current = nullptr;
}

template<typename L>
void link<L>::initializedList()
{
	Node* node = new Node();
	node->current = current;
	node->next = this->head;
	this->head = node;
	this->length++;
}

template<typename L>
const bool link<L>::isEmptyList()
{
	return false;
}

template<typename L>
const void link<L>::print()
{
	Node* head = this->head;
	int i = 1;
	while (head)
	{
		std::cout << i << ": " << head->data << std::endl;
		head = head->next;
		i++;
	}
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
Iterator<L> link<L>::begin()
{
	return link<L>();
}

template<typename L>
Iterator<L>link<L>::end()
{
	return link<L>();
}

template<typename L>
link<L>::link()
{

}

template<typename L>
link<L>::link(const link<L>&)
{
	this->length = 0;
	this->head = NULL;
}

template<typename L>
link<L>::~link()
{
	std::cout << "LIST DELETED";
}

template<typename L>
void link<L>::copyList(const link<L>&)
{

}