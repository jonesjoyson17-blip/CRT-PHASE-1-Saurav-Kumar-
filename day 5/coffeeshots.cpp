#include<iostream>
using namespace std;
int main(){
    int shots;
    int totalvolume;
    cout << "Enter the no. of shots;";
    cin >> shots;
    totalvolume = shots * 30;
    cout << "Total volume of coffee: " << totalvolume << " ml" << endl;
    return 0;
}
