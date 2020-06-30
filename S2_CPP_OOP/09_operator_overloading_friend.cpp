#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r=0, int i=0) : real(r), imag(i) {}
    void Print()
    {
        cout << "Real: " << this->real << endl;
        cout << "Imaginary: " << this->imag << endl;
    }
    friend Complex operator+(Complex const &,Complex const &);
};

Complex operator+(Complex const &a, Complex const &b)
{
    Complex s;
    s.imag=a.imag+b.imag;
    s.real=a.real+b.real;
    return s;
}

int main(){
    Complex a(10,20);
    Complex b(30,50);
    Complex c=a+b;
    c.Print();
    return 0;
}