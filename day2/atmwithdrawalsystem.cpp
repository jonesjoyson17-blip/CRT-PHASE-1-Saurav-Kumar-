#include <iostream>
using namespace std;

int main() {
    int balance = 10000;
    int amount;

    cout << "Enter withdrawal amount: ";
    cin >> amount;

    if(amount <= 0)
        cout << "Invalid amount";
    else if(amount > balance)
        cout << "Insufficient balance";
    else if(amount % 100 != 0)
        cout << "Enter amount in multiples of 100";
    else {
        balance -= amount;
        cout << "Transaction successful\n";
        cout << "Remaining balance = " << balance;
    }

    return 0;
}