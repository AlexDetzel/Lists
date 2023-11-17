#pragma once
#include "Container.h"
class SinglyLinkedList : public Container
{
public:
	SinglyLinkedList();
	~SinglyLinkedList();
	int& operator[](const int index) override;
	void push_back(int data) override;
	int GetSize() override;
	void pop_front() override;
	void clear() override;
	void insert(int value, int index) override;
	void push_front(int value) override;
	void removeAt(int index) override;

private:
	class Node
	{
	public:
		Node* pNext;
		int data;
		Node(int data, Node* pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};
	Node* head;
};

