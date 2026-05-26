//.Q.11.  write a program to demonstrate run-time error in c++. 
#include <iostream>

using namespace std;

int main()
{
    int arr[3] = {1, 2, 3};

    cout << arr[10];

    return 0;
}