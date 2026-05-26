// Q.15. demonstrate variable lifetime in a program using c++. 
#include <iostream> 
using namespace std; 
int main() 
 {
    {
    int num = 10; // variable 'num' is created and initialized 
    cout << " block = " << num << endl;
    }

    cout << "block ended" << endl; 


    return 0; 

 }