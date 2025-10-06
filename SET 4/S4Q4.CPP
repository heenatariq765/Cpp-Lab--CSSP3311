#include<iostream>
using namespace std;
class Complex
{
    public:
    int real, imag;
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    
    void display()
    {
        cout << "Real part=" << real << endl;
        cout << "Imaginary part=" << imag <<"i"<< endl;
    }
int getData()const{
    return real,imag;
}
};
Complex add(Complex c1, Complex c2)
    {return Complex(c1.real + c2.real, c1.imag + c2.imag);
    }
      int main()
{
    Complex C1(10, 20);
    Complex C2(30, 40);
    Complex C3 = add(C1, C2);
    cout << "After adding two complex numbers=" << endl;
    C3.display();
    return 0;
}
