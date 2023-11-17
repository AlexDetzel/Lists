// Lists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SinglyLinkedList.h"
#include "TwoLinkedList.h"
#include "Container.h"

void writeStr(Container* str)
{
	for (int i = 0; i < (*str).GetSize(); i++)
	{
		std::cout << (*str)[i] << " " << '\t';
	}
	std::cout << "\n\n";
}

int main()
{
	Container* str;
	int a = 1;
	std::cin >> a;

	if (a == 1)
	{
		str = new SinglyLinkedList;
	}
	else
	{
		str = new TwoLinkedList;
	}

	(*str).push_back(1);
	(*str).push_back(1);
	(*str).push_back(1);
	(*str).push_back(1);
	(*str).push_back(1);
	(*str).push_back(1);

	writeStr(str);

	(*str).push_front(22);

	writeStr(str);

	(*str).insert(4, 2);

	writeStr(str);

	(*str).removeAt(1);

	writeStr(str);

	(*str).pop_front();

	writeStr(str);

	(*str).clear();
	(*str).push_back(132321);

	writeStr(str);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
