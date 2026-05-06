#include<iostream>
#include<string>
using namespace std;
class Student1
{
private:
    int reg=100;

public:
    string name;
    int rollno;

    void display() {
        cout << "Name:"<< name << endl;
        cout << "Roll no:"<< rollno << endl;
        cout <<"Reg no:"<< reg << endl;
        reg++;
    }
};

int main(){
    Student1 s1;
    s1.name= "Kishan";
    s1.rollno=20;
    s1.display();

    return 0;
}


