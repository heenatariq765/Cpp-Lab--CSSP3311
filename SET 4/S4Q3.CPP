#include<iostream>
using namespace std;
class Circle
{
    public:
    int radius;
    Circle(int r)
    {
        radius=r;
    }
    void increaseRadius(Circle *c)
    {
        c->radius+=5;
    }
};
int main()
{
    Circle C1(10);
    cout<<"Before increasing radius="<<C1.radius<<endl;
    C1.increaseRadius(&C1);
    cout<<"After increasing radius="<<C1.radius<<endl;
    return 0;
}