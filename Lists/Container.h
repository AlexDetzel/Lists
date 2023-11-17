#pragma once
#include<iostream>
class Container
{
public:
	virtual void push_back(int data) = 0;
	virtual int GetSize() = 0;
	virtual void pop_front() = 0;
	virtual void clear() = 0;
	virtual void insert(int value, int index) = 0;
	virtual void push_front(int value) = 0;
	virtual void removeAt(int index) = 0;
	virtual int& operator[](const int index) = 0;
protected:
	int Size;

};

