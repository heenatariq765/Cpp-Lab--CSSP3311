#include<iostream>
using namespace std;
class Complex
{
    public:
    double real;
    double imag;
    Complex(double r, double i)
    {
        real=r;
        imag=i;
    }
   Complex add(Complex C)
   {
    return Complex
   ( C.real=real+C.real,C.imag=imag+C.imag);
    return C;
   }
    void display()
    {
      cout<<real<<" + "<<imag<<"i"<<endl;
    }
};
int main()
{
    Complex C1(2.5,3.5);
    Complex C2(1.5,2.5);
    Complex C3=C1.add(C2);
    cout<<"details of complex number 3 after addition of C1 and C2:"<<endl;
    C3.display();
    return 0;
}