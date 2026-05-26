// write a c++ program to display compiler version information. 
#include <iostream> 
using namespace std;
int main() 
{
    cout << "GNU C++ Compiler Version: "<<__GNUC__ << "." << __GNUC_MINOR__<< "." << __GNUC_PATCHLEVEL__ << endl; 

return 0;
}