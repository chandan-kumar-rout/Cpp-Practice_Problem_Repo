//Q.17. Write program using anonymous namespace.
#include <iostream>

using namespace std;

namespace
{
    int secret = 999;
}

int main()
{
    cout << secret;

    return 0;
}