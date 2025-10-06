#include<iostream>
using namespace std;
class Circle
{
    public:
    double radius;
    //default constructor
    Circle()
    {
        radius=1;
    }
   Circle(double r)
   {
    radius=r;
    cout<<"\nenter radius=";
    cin>>radius;
   }
void area()
{
    double area= (3.14)* radius *radius;
    cout<<"area of circle with radius is="<<radius<<" is "<<area;
}
};
int main()
{
    Circle C1;
    cout<<"area of circle with default constructor"<<endl;
    C1.area();
    Circle C2(0);
    cout<<"area of circle with parameterized constructor"<<endl;
    C2.area();
    return 0;
}