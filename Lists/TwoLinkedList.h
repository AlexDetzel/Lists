#pragma once
#include "Container.h"
class TwoLinkedList : Container
{
public:
	TwoLinkedList();
	~TwoLinkedList();
	int& operator[](const int index) override;
	void push_back(int data) override;
	int GetSize() override;
	void pop_front() override;
	void pop_back();
	void clear() override;
	void insert(int value, int index) override;
	void push_front(int value) override;
	void removeAt(int index) override;

private:
	class Node
	{
	public:
		Node* pNext;
		Node* pPrev;
		int data;
		Node(int data, Node* pNext = nullptr, Node* pPrev = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
			this->pPrev = pPrev;
		}
	};
	Node* head;
	Node* tail;
};

