#include<iostream>
using namespace std;
int fac(int x){
    if(x==1)
    return 1;

    return x*fac(x-1);

}
int main(){
    int n;
    cout<<"enter for factorial: ";
    cin>>n;

    cout<<"Factorial of "<<n<<" is: "<<fac(n)<<endl;


}