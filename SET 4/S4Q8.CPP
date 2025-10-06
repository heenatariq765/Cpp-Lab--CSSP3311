#include<iostream>
using namespace std;
class Account
{
    public:
    double balance;
    Account(double b)
    {
        balance=b;
    }
void display()
{
    cout<<"Balance="<<balance<<endl;
}
void transfer(Account &a,double amount)
{
    if(balance>=amount)
    {
        balance=balance-amount;
        a.balance=a.balance+amount;

        cout<<"Amount transferred successfully"<<endl;
    }
    else
    {
        cout<<"Insufficient balance"<<endl;
    }
}
};
int main()
{
    Account A1(5000);
    Account A2(2000);
    cout<<"Details of Account 1:"<<endl;
    A1.display();
    cout<<"Details of Account 2:"<<endl;
    A2.display();
    A1.transfer(A2,3000);
    cout<<"After transferring amount:"<<endl;
    cout<<"Details of Account 1:"<<endl;
    A1.display();
    cout<<"Details of Account 2:"<<endl;
    A2.display();
    return 0;
}
