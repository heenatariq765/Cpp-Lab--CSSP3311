#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    int marks;
    Student(string n, int m) {
        name = n;
        marks = m;
    }
    int getData() const {
        return marks;
    }

    void display()
    {
        cout << "name is=" << name << endl;
        cout << "marks is=" << marks << endl;
    }
    
};
Student compare(const Student &S1, Student const &S2)
{
    if (S1.getData() >= S2.getData())
        return S1;
    else
        return S2;
}
int main()
{
    Student S1("sneha", 85);
    Student S2("riya", 90);
    cout << "Details of student 1:" << endl;
    S1.display();
    cout << "Details of student 2:" << endl;
    S2.display();
    if (S1.getData() > S2.getData()) {
        cout << S1.name << " has higher marks." ;
    } else if (S1.getData() < S2.getData()) {
        cout << S2.name << " has higher marks.";
    } else {
        cout << "Both students have equal marks." ;
    }
    return 0;
}