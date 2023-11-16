// Lists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SinglyLinkedList.h"
#include "TwoLinkedList.h"
int main()
{
    TwoLinkedList a;
    a.push_back(2);
    a.push_back(3);
    a.push_back(5);
    a.push_back(7);
    
    for (int i = 0; i < a.GetSize(); i++)
    {
        std::cout << a[i] << '\t';
    }
    std::cout << '\n';


    a.removeAt(2);


    for (int i = 0; i < a.GetSize(); i++)
    {
        std::cout << a[i] << '\t';
    }
    std::cout << '\n';
    
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
