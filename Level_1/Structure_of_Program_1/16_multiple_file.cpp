// Q.16. create a program using multiple files in c++. 
// main.cpp 
#include <iostream>

using namespace std;

void display();

int main()
{
    display();

    return 0;
}
  /*
  display.cpp:



#include <iostream>

using namespace std;

void display()
{
    cout << "Multiple File Structure";
}
    */


    /*
    Compile Command:


    
g++ main.cpp display.cpp -o app
Output
Multiple File Structure

*/