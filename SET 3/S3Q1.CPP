#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    int rollno ;
void display()
{
    cout<<"name is="<<name<<endl;
    cout<<"rollno is="<<rollno<<endl;
}
};
int main()
{
Student S1;
S1.name="Heena";
S1.rollno=12;
S1.display();
return 0;
}