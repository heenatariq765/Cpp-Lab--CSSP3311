#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int length;
    int width;
    Rectangle(int l,int w)
    {
        length=l;
        width=w;
    }
    int area();
};
int Rectangle::area()
{
    return length*width;
}
int main()
{
    Rectangle R1(4,3);
    cout<<"area of rectangle 1 is="<<R1.area()<<endl;
    return 0;
}
