#include<iostream>
using namespace std;
class Car
{
    public:
    string brand;
    double price;
    Car(string b, double p)
    {
        brand=b;
        price=p;
    }
    //copy constructor
   Car(const Car &c)
   {
    brand=c.brand;
    price=c.price;
    cout<<"copy constructor called"<<endl;
   }
    void display()
    {
     cout<<"brand="<<brand<<endl;
     cout<<"price="<<price<<endl;
    }
};
int main()
{
    Car C1("BMW",50000);
    cout<<"details of car 1"<<endl;
    C1.display();
    Car C2=C1; //copy constructor called
    cout<<"details of car 2 copied from C1:"<<endl;
    C2.display();
    return 0;
}