//Q.3. write a program using valid identifiers in c++.
#include <iostream> 
using namespace std; 
int main() 
{
    int age = 20; 
    int total_marks = 500; 
    int student1 = 1; 

    cout << age << endl; 
    cout << total_marks << endl; 
    cout << student1 << endl; 

    return 0; 
}

/*
Rules for Valid Identifiers
 Can contain:

Letters
Digits
Underscore

Cannot:

Start with digit
Use spaces
Use keywords

Invalid Examples
int 1age = 10;
int total marks = 50;
int class = 20;


Correct Forms
int age1;
int total_marks;
int myClass;

*/