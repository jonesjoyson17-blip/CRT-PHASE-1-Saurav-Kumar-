#include <iostream>
using namespace std;

int globalVar = 10;

int main() {
    int userInput;

    cout << "Enter an integer: ";
    cin >> userInput;

    double result;

    result = (double)globalVar / userInput;

    cout << "Result after division: " << result << endl;

    return 0;
}