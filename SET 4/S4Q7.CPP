#include<iostream>
using namespace std;
class Time
{
    public:
    int hours,minutes;
    Time(int h,int m)
    {
        hours=h;
        minutes=m;
    }
    void addTime(Time &t)
    {
        hours=hours+t.hours;
        minutes=minutes+t.minutes;
        if(minutes>=60)
        {
            hours=hours+minutes/60;
            minutes=minutes%60;
        }
    }
    void display()
    {
        cout<<"Hours="<<hours<<endl;
        cout<<"Minutes="<<minutes<<endl;
    }
};
int main()
{
    Time T1(2,60);
    Time T2(4,30);
    cout<<"Details of Time 1:"<<endl;
    T1.display();
    cout<<"Details of Time 2:"<<endl;
    T2.display();
    T1.addTime(T2);
    cout<<"After adding two time periods:"<<endl;
    T1.display();
    return 0;
}