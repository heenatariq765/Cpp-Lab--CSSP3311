#include<iostream>
using namespace std;
class Point
{
    public:
    int x,y;
    Point(int a, int b)
    {
        x=a;
        y=b;
    }
};
    void display(Point p)
    {
        cout<<"x="<<p.x <<endl;
        cout<<"y="<<p.y<<endl;
        p.x=50;
        p.y=60;

    }
int main()
{
    Point p1(10,20);
    cout<<"display coordinates of point p1="<<endl;
    display(p1);
    cout<<"after fuction call="<<endl;
    return 0;
}
