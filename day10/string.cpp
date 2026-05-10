#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str1 = "Jello";
    string str2 = "Mello";
    cout << str1 << " " << str2 << endl;

// length of string
    int n = str1.length();
    cout<<"length of string is:"<< n << endl;
    
    // append string
    cout << "after appending string is:" << str1.append("Students") << endl;
    
    // empty string
    cout << " is string empty:" << str2.empty() << endl;
    
    // concatenation of string 
    cout << "AFTER CONCATENATION OF STRING IS:" << str1 + "Bacho" << endl;
    cout << "AFTER CONCATENATION OF STRING IS 2:" << str2 << endl;
    
    // push_back() method
    str2.push_back('U');
    cout << "After push_back() method:" << str2 << endl; 
    
    // pop_back() method
    str2.pop_back();
    cout << "After pop_back() method:" << str2 << endl; 

    // find () method
    int index = str1.find("ello");
    cout << "INDEX of 'ello' in str1:" << index << endl;

    // swap() method
    str1.swap(str2);
    cout<< "Afer swapping str1 and str2:" << endl;
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    
    // at method. str1[1];
    char ch = str1.at(1);
    cout << "Character at index 1 in str1:" << ch << endl;
    
    // getline() method
    string str3;
    // cin >> str3;
    getline(cin, str3);
    cout << "You entered: " << str3 << endl;
    
    return 0;

}