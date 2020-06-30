#include <iostream>
using namespace std;

class B;

class A
{
public:
    void showB(B &x);
};
class B
{
private:
    int b;

public:
    B() : b(0) {}
    friend void A::showB(B &x);
};

void A::showB(B &x)
{
    cout << x.b << endl;
}

int main()
{
    B b;
    A *a = new A();
    a->showB(b);
    return 0;
}
