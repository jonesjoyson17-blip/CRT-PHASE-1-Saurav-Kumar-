#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter positive numbers (negative to stop):\n";

    while(true) {
        cin >> num;

        if(num < 0)
            break;

        sum += num;
    }

    cout << "Final Sum = " << sum;

    return 0;
}