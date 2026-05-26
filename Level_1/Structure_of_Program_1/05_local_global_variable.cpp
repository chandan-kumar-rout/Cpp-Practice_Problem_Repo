// Q.5. write a program showing local and global variable.

#include <iostream> 
using namespace std; 
int globalVar = 100; // global variable 
int main() 
{
        int LocalVar = 50; // local variable 
        cout << "Global Variable = " << globalVar << endl; 
        cout << "Local Variable = " << LocalVar << endl; 
        return 0;
}