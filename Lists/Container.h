#pragma once
#include<iostream>
class Container
{
public:
	Container();
	virtual ~Container();
	virtual void push_back(int data);
	virtual int GetSize();
	virtual void pop_front();
	virtual void clear();
	virtual void insert(int value, int index);
	virtual void push_front(int value);
	virtual void removeAt(int index);
	virtual int& operator[](const int index);
protected:
	int Size;

};

