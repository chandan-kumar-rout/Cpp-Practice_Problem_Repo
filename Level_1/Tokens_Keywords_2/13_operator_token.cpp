// Q.13. write a program using operator tokens in c++. 
#include <iostream> 
using namespace std; 
int main()
 {
        int a = 10, b = 5; 
        // using operator tokens 
        int sum = a + b; // addition operator 
        int difference = a - b; // subtraction operator 
        int product = a * b; // multiplication operator 
        int quotient = a / b; // division operator 
        int remainder = a % b; // modulus operator 
        cout << "Sum: " << sum << endl; 
        cout << "Difference: " << difference << endl; 
        cout << "Product: " << product << endl; 
        cout << "Quotient: " << quotient << endl; 
        cout << "Remainder: " << remainder << endl; 
        return 0; 
 }