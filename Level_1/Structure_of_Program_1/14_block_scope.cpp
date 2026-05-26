// Q.14. demonstrate block scope in a program using c++. 
#include <iostream>
using namespace std; 
int main() 
{
    {
        int x = 25; 
        cout << x << endl; 

    }
    // cout << x; // error: 'x' was not declared in this scope 
    return 0; 
}