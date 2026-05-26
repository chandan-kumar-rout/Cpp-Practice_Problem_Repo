// Q.1. write a program to find the size of different data types in c++.
#include <iostream>
using namespace std;
int main()
{
    cout << "Size of int = "
         << sizeof(int) << " bytes" << endl;

    cout << "Size of float = "
         << sizeof(float) << " bytes" << endl;

    cout << "Size of double = "
         << sizeof(double) << " bytes" << endl;

    cout << "Size of char = "
         << sizeof(char) << " bytes" << endl;

    cout << "Size of bool = "
         << sizeof(bool) << " bytes" << endl;

    return 0;
}