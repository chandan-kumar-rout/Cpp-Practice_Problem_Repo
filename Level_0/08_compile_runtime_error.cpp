// Q.8. write a program to demonstrate compile-time and run-time errors.
#include <iostream> 
using namespace std; 
int main() 
{
   int a = 10; 
   int b = 0;
    // Compile-time error: missing semicolon 
    cout << "This line will cause a compile-time error" << endl;

    // Run-time error: division by zero 
    
    cout << a / b;
    return 0;
}