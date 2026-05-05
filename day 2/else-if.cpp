#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter age: ";
    cin >> age;

    if (age < 0) {
        cout << "Invalid age";
    }
    else if (age > 100) {
        cout << "Centurion";
    }
    else if (age >= 18 && age <= 99) {
        cout << "Eligible to vote";
    }
    else {  // age < 18
        cout << "Not eligible to vote";
    }

    return 0;
}