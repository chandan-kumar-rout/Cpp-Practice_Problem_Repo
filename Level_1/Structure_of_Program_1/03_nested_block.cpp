//Q.3. Write a program demonstrating nested blocks.
#include <iostream>

using namespace std;

int main()
{
    cout << "Outer Block" << endl;

    {
        cout << "Inner Block" << endl;

        {
            cout << "Nested Inner Block" << endl;
        }
    }

    return 0;
}