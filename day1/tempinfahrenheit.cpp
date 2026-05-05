#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;

    // Take input from user
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Convert to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display result
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}