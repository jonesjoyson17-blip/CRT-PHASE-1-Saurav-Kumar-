#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    // Check if all three sides are equal
    if ( (a == b) && (b == c) ) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}