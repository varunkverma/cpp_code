#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.real = this->real + obj.real;
        res.imag = this->imag + obj.imag;
        return res;
    }
    void Print()
    {
        cout << "Real: " << this->real << endl;
        cout << "Imaginary: " << this->imag << endl;
    }
};

int main()
{
    Complex *c1 = new Complex(10, 20);
    Complex c2 = Complex(20, 40);
    Complex c3 = c1->operator+(c2);
    Complex c4=Complex(3,6);
    Complex c5=c3+c4;
    c3.Print();
    cout<<endl;
    c5.Print();
    return 0;
}