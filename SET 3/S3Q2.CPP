#include <iostream>
using namespace std;
class Book
{
    public:
    string title;
    string author;
    int price;
    void display()
    {
        cout<<"title="<<title<<endl;
        cout<<"author="<<author<<endl;
        cout<<"price="<<price<<endl;
    }
    void getData()
    {
        cout<<"title="<<endl;
        cin>>title;
        cout<<"author="<<endl;
        cin>>author;
        cout<<"price="<<endl;
        cin>>price;
    }
};
int main() {
  Book B1,B2,B3;
  cout<<"enter Book1 details\n";
  B1.getData();
  cout<<"enter Book2 details\n";
  B2.getData();
  cout<<"enter Book3 details\n";
  B3.getData();
  B1.display();
  B2.display();
  B3.display();
    return 0;
}