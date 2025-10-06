/*Write a program with a class Point (x, y). Create a non-member function
display(Point p) that takes a Point object by value and prints its coordinates.
Observe how changes inside the function do not affect the original object.*/

#include <iostream>
using namespace std;
class Point
{
    public:
    int x, y;
{
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display();
    void display(Point p)
    {
        cout << "x=" << p.x << endl;
        cout << "y=" << p.y << endl;
    }
}
};
int main()
{
    Point p1(10, 20);
    p1.display(p1);
    return 0;
}
