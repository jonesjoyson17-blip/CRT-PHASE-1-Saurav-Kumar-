#include<iostream>
#include<string>
using namespace std;
class Student
{
    public:
    string name;
    int rollno;

    void display() {
        cout << "Name:"<< name << endl;
        cout << "Roll no:"<< rollno << endl;
    }
};

int main(){
    Student s1;
    s1.name= "Kishan";
    s1.rollno=20;
    s1.display();

    return 0;
}

