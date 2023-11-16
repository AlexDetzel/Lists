#include "TwoLinkedList.h"

TwoLinkedList::TwoLinkedList()
{
	this->Size = 0;
}

TwoLinkedList::~TwoLinkedList()
{
}

int& TwoLinkedList::operator[](const int index)
{
	if (index < this->Size / 2)
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
	else
	{
		int counter = this->Size - 1;
		Node* current = this->tail;

		while (current != nullptr)
		{
			if (counter == index)
				return current->data;
			current = current->pPrev;
			counter--;
		}
		std::cout << "Element could not be found!!!";
		return counter;
	}
}

void TwoLinkedList::push_back(int data)
{
	if (tail == nullptr)
	{
		tail = new Node(data);
		head = tail;
		this->Size += 1;
	}
	else {
		Node* temp = tail;
		tail = new Node(data, nullptr, this->tail);
		temp->pNext = tail;
		this->Size += 1;
	}
}

int TwoLinkedList::GetSize()
{
	return this->Size;
}

void TwoLinkedList::pop_front()
{
	if (this->Size == 0)
	{
		std::cout << "There are no elements";
	}
	else
	{
		Node* temp = head;
		head = head->pNext;
		head->pPrev = nullptr;
		delete temp;
		Size--;
	}
}

void TwoLinkedList::pop_back()
{
	if (this->Size == 0)
	{
		std::cout << "There are no elements";
	}
	else
	{
		Node* temp = tail;
		tail = tail->pPrev;
		tail->pNext = nullptr;
		delete temp;
		Size--;
	}
}

void TwoLinkedList::clear()
{
	while (this->Size)
	{
		pop_front();
	}
}

void TwoLinkedList::insert(int value, int index)
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
		else if (index < this->Size / 2)
		{
			Node* current = this->head;
			int counter = 0;
			while (current->pNext != nullptr && counter < index - 1)
			{
				current = current->pNext;
				counter += 1;
			}
			Node* temp = current->pNext;
			current->pNext = new Node(value, temp, current);
			temp->pPrev = current->pNext;
			this->Size++;
		}
		else
		{
			Node* current = this->tail;
			int counter = this->Size - 1;
			while (current->pPrev != nullptr && counter > index + 1)
			{
				current = current->pPrev;
				counter -= 1;
			}
			Node* temp = current->pPrev;
			current->pPrev = new Node(value, current, temp);
			temp->pNext = current->pPrev;
			this->Size++;
		}
	}
}

void TwoLinkedList::push_front(int value)
{
	if (head == nullptr)
	{
		head = new Node(value);
		tail = head;
		this->Size += 1;
	}
	else {
		Node* temp = head;
		head = new Node(value, this->head, nullptr);
		temp->pPrev = head;
		this->Size += 1;
	}
}

void TwoLinkedList::removeAt(int index)
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
		else if (index == this->Size - 1)
		{
			this->pop_back();
		}
		else if (index < this->Size / 2)
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
			temp->pNext->pPrev = temp->pPrev;
			this->Size--;
		}
		else
		{

			Node* current = this->tail;
			int counter = this->Size - 1;
			while (current->pPrev != nullptr && counter > index + 1)
			{
				current = current->pPrev;
				counter -= 1;
			}
			Node* temp = current->pPrev;
			current->pPrev = temp->pPrev;
			temp->pPrev->pNext = temp->pNext;
			this->Size--;
		}
	}
}
