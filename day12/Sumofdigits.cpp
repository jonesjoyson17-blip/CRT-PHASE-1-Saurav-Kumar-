#include<iostream>
using namespace std;

int sumofDigits(int x)
{
    if (x == 0)
    return 0;
    return (x % 10) + sumofDigits(x / 10);
}
int main() {
    int n ;
    cin>> n;
    cout<<"sum of digits of " << n <<" is: " << sumofDigits(n)<<endl;
    return 0;
}  