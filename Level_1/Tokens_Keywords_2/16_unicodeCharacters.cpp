//Q.16. write a program using unicode characters in c++. 
#include <iostream> 
using namespace std; 
int main() 
{
    // using unicode characters in c++. 
    wchar_t symbol = L'Ω'; // Unicode character for Omega
    wcout << L"The Unicode character is: " << symbol << endl; 

    return 0;
}