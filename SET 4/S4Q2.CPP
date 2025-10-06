#include<iostream>
using namespace std;
class Rectangle
{
     public:
    int length,breadth;
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
   void scale(Rectangle &r)
    {
        r.length=r.length*2;
        r.breadth=r.breadth*2;
    }
};
int main()
{
    Rectangle R1(10,20);
    cout<<"Before scaling="<<R1.length<<"x"<<R1.breadth<<endl;
    cout<<"After scaling="<<R1.length<<"x"<<R1.breadth<<endl;
    R1.scale(R1);
    return 0;
}