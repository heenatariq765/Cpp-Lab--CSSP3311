
#include <iostream>
using namespace std;
class Matrix
{
    public:
    int arr[2][2];
    Matrix(int a[2][2])
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                arr[i][j]=a[i][j];
            }
        }
    }
    Matrix add(Matrix &m)
    {
        int sum[2][2];
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                sum[i][j]=arr[i][j]+m.arr[i][j];
            }
        }
        return Matrix(sum);
    }
    void display()
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    int a1[2][2]={{1,2},{3,4}};
    int a2[2][2]={{5,6},{7,8}};
    Matrix M1(a1);
    Matrix M2(a2);
    cout<<"Details of Matrix 1:"<<endl;
    M1.display();
    cout<<"Details of Matrix 2:"<<endl;
    M2.display();
    Matrix M3 = M1.add(M2);
    cout<<"After adding two matrices:"<<endl;
    M3.display();
    return 0;
}