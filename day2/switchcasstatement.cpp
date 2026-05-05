#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Menu: ";
    cout << "1. Support ";
    cout << "2. Billing ";
    cout << "3. Technical Support ";
    cout << "0 or 4. Speak to an Agent ";
    
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "You selected Support";
            break;

        case 2:
            cout << "You selected Billing";
            break;

        case 3:
            cout << "You selected Technical Support";
            break;

        case 0:
        case 4:
            cout << "Connecting you to an Agent...";
            break;

        default:
            cout << "Invalid Option";
    }

    return 0;
}