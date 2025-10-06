#include<iostream>
using namespace std;
class Report
{
public:
   string name;
   int rollno;
   int marks[5];
   void input()
   {
    cout<<"enter name of student=";
    cin>>name;
    cout<<"enter rollno of student=";
    cin>>rollno;
    for(int i=0;i<5;i++)
    {
        cout<<"enter marks of subject "<<i+1<<":";
        cin>>marks[i];
    }
   }
    void display()
    {
     cout<<"name of student="<<name<<endl;
     cout<<"rollno of student="<<rollno<<endl;
     for(int i=0;i<5;i++)
     {
        cout<<"marks of subject "<<i+1<<"=";
          cout<<marks[i]<<" ";
     }
     calculateGrade();
    }
     void calculateGrade()
     {
        int total=0;
        for(int i=0;i<5;i++)
        {
            total=total+marks[i];
        }
        double percentage =total/5.0;
       cout<<"\npercentage="<<percentage<<endl;
       char grade;
         if(percentage>=85)
         {
          cout<<"grade=A"<<endl;
         }
         else if(percentage>=65)
         {
          cout<<"grade=B"<<endl;
         }
         else if(percentage>=45)
         {
          cout<<"grade=C"<<endl;
         }
         else
         {
          cout<<"grade=F"<<endl;
         }
        }
    };
int main()
{
    int n;
   cout<<"enter number of students;";
   cin>>n;
   Report R[n];
   for(int i=0;i<n;i++)
   {
    R[i].input();
   }

    Report R1;

    for(int i=0;i<n;i++)
    {
        R1=R[i];
    R1.display();
    }
    return 0;
}