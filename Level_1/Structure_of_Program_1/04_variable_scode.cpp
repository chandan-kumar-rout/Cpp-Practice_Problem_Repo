// Q.4.write a program demonstrating variable scope. 
#include <iostream> 
using namespace std; 
int main() 
{
     int x = 10;
     {
        int y = 20; 
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
     }
     cout << "x = " << x << endl;
     return 0;
}