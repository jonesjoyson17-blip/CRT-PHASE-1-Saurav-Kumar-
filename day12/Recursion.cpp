#include<iostream>
using namespace std;
void print(int n) {
    if(n > 10)
        return;

    cout << n << " ";
    
    print(n + 1);
}
int main(){
    cout<<" Print using for loop: ";
    for(int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout<<endl;
    cout<<"Using Recursion function: ";
    print(1);

    return 0;
}