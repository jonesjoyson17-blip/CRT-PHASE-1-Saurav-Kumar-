#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int maxVal = (a > b) ? a : b;
    cout << "Max = " << maxVal;

    return 0;
}