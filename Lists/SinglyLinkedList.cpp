#include "SinglyLinkedList.h"

SinglyLinkedList::SinglyLinkedList()
{
	this->Size = 0;
}

SinglyLinkedList::~SinglyLinkedList()
{
	clear();
}

int& SinglyLinkedList::operator[](const int index)
{
	int counter = 0;
	Node* current = this->head;

	while (current != nullptr)
	{
		if (counter == index)
			return current->data;
		current = current->pNext;
		counter++;
	}
	std::cout << "Element could not be found!!!";
	return counter;
}

void SinglyLinkedList::push_back(int data)
{
	if (head == nullptr)
	{
		head = new Node(data);
	}
	else
	{
		Node* current = this->head;
		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node(data);
		
	}
	this->Size += 1;
}

int SinglyLinkedList::GetSize()
{
	return this->Size;
}

void SinglyLinkedList::pop_front()
{
	if (this->Size == 0)
	{
		std::cout << "There are no elements";
	}
	else
	{
		Node* temp = head;
		head = head->pNext;
		delete temp;
		Size--;
	}
}

void SinglyLinkedList::clear()
{
	while (this->Size)
	{
		pop_front();
	}
}

void SinglyLinkedList::insert(int value, int index)
{
	if (index >= this->Size)
	{
		std::cout << "the index is out of scope of the array";
	}
	else
	{
		if (index == 0)
		{
			this->push_front(value);
		}
		else
		{
			Node* current = this->head;
			int counter = 0;
			while (current->pNext != nullptr && counter < index - 1)
			{
				current = current->pNext;
				counter += 1;
			}
			Node* temp = current->pNext;
			current->pNext = new Node(value, temp);
			this->Size++;
		}
	}
}

void SinglyLinkedList::push_front(int value)
{
	head = new Node(value, this->head);
	Size++;
}

void SinglyLinkedList::removeAt(int index)
{
	if (index >= this->Size)
	{
		std::cout << "the index is out of scope of the array";
	}
	else
	{
		if (index == 0)
		{
			this->pop_front();
		}
		else
		{
			Node* current = this->head;
			int counter = 0;
			while (current->pNext != nullptr && counter < index - 1)
			{
				current = current->pNext;
				counter += 1;
			}
			Node* temp = current->pNext;
			current->pNext = temp->pNext;
			delete temp;
			this->Size--;
		}
	}
}
