// with argument with return type
#include<iostream>
using namespace std;

int add(int a, int b)   // return type = int
{
    cout << a + b;
}

int main()
{
    int result = add(3, 5);
    cout << result << endl;

    return 0;
}