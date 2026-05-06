#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    float sum, average;

  
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    
    sum = a + b + c;


    average = sum / 3;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}