//Q.18. Write program to demonstrate name collision in c++.
#include <iostream>

using namespace std;

namespace A
{
    int value = 10;
}

namespace B
{
    int value = 20;
}

int main()
{
    cout << A::value << endl;
    cout << B::value;

    return 0;
}