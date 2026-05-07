#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    string regNo;
    string email;
    string phone;
    float marks;

public:

    // Parameterized Constructor
    Student(string n, int r, string reg, string e, string p, float m)
    {
        name = n;
        rollNo = r;
        regNo = reg;
        email = e;
        phone = p;
        marks = m;
    }

    // Copy Constructor
    Student(const Student &s)
    {
        name = s.name;
        rollNo = s.rollNo;
        regNo = s.regNo;
        email = s.email;
        phone = s.phone;
        marks = s.marks;
    }

    // Display Function
    void display()
    {
        cout << "\n----- Student Details -----" << endl;
        cout << "Name       : " << name << endl;
        cout << "Roll No    : " << rollNo << endl;
        cout << "Reg No     : " << regNo << endl;
        cout << "Email ID   : " << email << endl;
        cout << "Phone No   : " << phone << endl;
        cout << "Marks      : " << marks << endl;
    }
};

int main()
{
    string name, regNo, email, phone;
    int rollNo;
    float marks;

    // Taking input from user
    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cin.ignore();

    cout << "Enter Registration Number: ";
    getline(cin, regNo);

    cout << "Enter Email ID: ";
    getline(cin, email);

    cout << "Enter Phone Number: ";
    getline(cin, phone);

    cout << "Enter Marks/Grade: ";
    cin >> marks;

    // Object using parameterized constructor
    Student s1(name, rollNo, regNo, email, phone, marks);

    // Object using copy constructor
    Student s2 = s1;

    cout << "\nDetails of Original Student:";
    s1.display();

    cout << "\nDetails of Copied Student:";
    s2.display();

    return 0;
}