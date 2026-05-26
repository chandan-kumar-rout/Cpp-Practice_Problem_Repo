//Q.13.create separate source file and compile it using command line. 

// main.cpp 

#include <iostream> 
using namespace std; 
void greet(); 
int main()
{
    greet(); 
    return 0; 

}

// greet.cpp
void greet()
{
    cout << "Hello, World!" << endl;
}