#include<iostream>
using namespace std;
class Time
{
    public:
    int hour;
    int minute;
Time(int h, int m)
{
    hour=h;
    minute=m;
}
Time addTime(Time t)
{
    int h=hour+t.hour;
    int m=minute+t.minute;
    if(m>=60)
    {
        h=h+1;
        m=m-60;
    }
    return Time(h,m);
}
void display()
{
    cout<<hour<<" hours and "<<minute<<" minutes"<<endl;
}
};
int main()
{
    Time T1(2,60);
    Time T2(1,45);
    Time T3=T1.addTime(T2);
    cout<<"Time after addition of T1 & T2 is:"<<endl;
    T3.display();
    return 0;
}