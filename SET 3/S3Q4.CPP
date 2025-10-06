#include <iostream>
using namespace std;
class Employee
{
    public:
    int id;
    double salary;
    Employee (int i,double s)
    {
        id=i;
        salary=s;
    }
    void display(){
    cout<<"id is="<<id<<endl;
    cout<<"salary is="<<salary<<endl;
    }
};
int main() {
  
    Employee E1(101,4567.87);
    Employee E2(105,6765.98);
    E1.display();
    E2.display();
    return 0;
}