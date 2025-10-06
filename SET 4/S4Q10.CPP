#include<iostream>
using namespace std;
class Employee
{
    public:
    int id;
    int salary;
    Employee(int i,int s)
    {
        id=i;
        salary=s;
    }
    void display()
    {
        cout<<"ID="<<id<<endl;
        cout<<"Salary="<<salary<<endl;
    }
    void updateSalary(Employee &e)
    {
        salary=e.salary;
    }
    void swap(Employee *e1, Employee *e2);
};

void swap(Employee *e1, Employee *e2)
{
    int temp = e1->salary;
    e1->salary = e2->salary;
    e2->salary = temp;
}

int main()
{
    Employee E1(101,50000);
    Employee E2(102,60000);
    cout<<"Details of Employee 1 before swapping:"<<endl;
    E1.display();
    cout<<"Details of Employee 2 before swap:"<<endl;
    E2.display();

    E1.updateSalary(E2);
    cout<<"After E1 copy salary of Employee 1:"<<endl;
    E1.display();
    E2.display();
    swap(&E1, &E2);
    cout<<"After swapping salaries:"<<endl;
    E1.display();
    E2.display();
    return 0;
}