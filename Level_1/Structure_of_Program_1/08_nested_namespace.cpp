// Q.08. write a program using nested namespace. 
#include <iostream> 
using namespace std; 
namespace A
 {
    namespace B
    {
        int number = 500;
    }
 }
 int main() 
  {
    cout << A::B::number;
    return 0;
  }