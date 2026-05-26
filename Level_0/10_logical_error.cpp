// Q.10.write a program to demonstrate logical error in c++. 
#include <iostream> 
using namespace std; 
int main() 
{
    int length = 10; 
    int breadth = 5;
    // logical error: incorrect formula for area of rectangle 
    int area = length * breadth; 
    cout << "Area of rectangle: " << area << endl;
    return 0; 
    
}