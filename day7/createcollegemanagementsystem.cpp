#include <iostream>
using namespace std;

// Base Class
class College
{
protected:
    string name;
    int age;

public:
    // Parameterized Constructor
    College(string n, int a)
    {
        name = n;
        age = a;
    }

    // Virtual Function
    virtual void details()
    {
        cout << "\nBelongs to College Base Class";
    }
};

// Derived Class : Student
class Student : public College
{
private:
    int rollNo;
    string course;

public:
    // Parameterized Constructor
    Student(string n, int a, int r, string c)
        : College(n, a)
    {
        rollNo = r;
        course = c;
    }

    // Function Overriding
    void details() override
    {
        cout << "\n----- Student Details -----";
        cout << "\nName : " << name;
        cout << "\nAge : " << age;
        cout << "\nRoll No : " << rollNo;
        cout << "\nCourse : " << course;
        cout << "\nBelongs to Student Derived Class\n";
    }
};

// Derived Class : Teacher
class Teacher : public College
{
private:
    int teacherID;
    string subject;

public:
    // Parameterized Constructor
    Teacher(string n, int a, int id, string s)
        : College(n, a)
    {
        teacherID = id;
        subject = s;
    }

    // Function Overriding
    void details() override
    {
        cout << "\n----- Teacher Details -----";
        cout << "\nName : " << name;
        cout << "\nAge : " << age;
        cout << "\nTeacher ID : " << teacherID;
        cout << "\nSubject : " << subject;
        cout << "\nBelongs to Teacher Derived Class\n";
    }
};

int main()
{
    // Creating Student Object
    Student s1("Rahul", 20, 101, "Computer Science");

    // Creating Teacher Object
    Teacher t1("Sharma", 45, 5001, "Mathematics");

    // Base Class Pointer
    College *ptr;

    // Pointing to Student Object
    ptr = &s1;
    ptr->details();

    // Pointing to Teacher Object
    ptr = &t1;
    ptr->details();

    return 0;
}