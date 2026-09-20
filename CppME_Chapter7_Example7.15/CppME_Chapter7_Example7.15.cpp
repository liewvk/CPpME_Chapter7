#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Menu" << endl;
    cout << "1. Coffee" << endl;
    cout << "2. Tea" << endl;
    cout << "3. Juice" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "You selected Coffee." << endl;
        break;
    case 2:
        cout << "You selected Tea." << endl;
        break;
    case 3:
        cout << "You selected Juice." << endl;
        break;
    default:
        cout << "Invalid choice." << endl;
    }

    return 0;
}
