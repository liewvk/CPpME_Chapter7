#include <iostream>
using namespace std;

int main()
{
    int password;

    cout << "Enter password: ";
    cin >> password;

    if (password == 1234)
    {
        cout << "Access granted." << endl;
    }
    else
    {
        cout << "Access denied." << endl;
    }

    return 0;
}
