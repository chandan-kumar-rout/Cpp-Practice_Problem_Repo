// Q.20. write a program to demonstrate creating an executable file in the terminal.
#include <iostream>
using namespace std;

int main()
{
    cout << "This program demonstrates creating an executable file in the terminal." << endl;
    return 0;
}

/*
Compile Command:-
g++ main.cpp -o myprogram


Explanation:
Command Part	Meaning
g++	C++ compiler
main.cpp	Source file
-o	Output file
myprogram	Executable name


Run Executable:
Linux
./myprogram


Windows
myprogram.exe
*/