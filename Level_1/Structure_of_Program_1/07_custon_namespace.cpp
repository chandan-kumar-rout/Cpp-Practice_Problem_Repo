// Q.7. create and use custon namespace in a program. 
#include <iostream> 
using namespace std; 
namespace MyNamespace
{
    int value = 100;
}

int main() 
{
    cout << MyNamespace::value; 
    return 0;
}