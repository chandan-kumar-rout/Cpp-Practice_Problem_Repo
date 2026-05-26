//Q.20.Create simple menu-driven program structure.
#include <iostream>

using namespace std;

int main()
{
    int choice;

    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;

    cout << "Enter Choice: ";
    cin >> choice;

    if(choice == 1)
    {
        cout << "Addition Selected";
    }
    else if(choice == 2)
    {
        cout << "Subtraction Selected";
    }
    else
    {
        cout << "Invalid Choice";
    }

    return 0;
}