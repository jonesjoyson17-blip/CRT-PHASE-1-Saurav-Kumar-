#include <iostream>
using namespace std;

int main() {
    int per;
    cout << "Enter percentage: ";
    cin >> per;

    if(per >= 90 && per <= 100)
        cout << "Grade A";
    else if(per >= 80)
        cout << "Grade B";
    else if(per >= 70)
        cout << "Grade C";
    else if(per >= 60)
        cout << "Grade D";
    else if(per >= 0)
        cout << "Grade E";
    else
        cout << "Invalid input";

    return 0;
}