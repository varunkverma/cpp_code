#include <iostream>
using namespace std;

class Base
{
public:
    virtual ~Base() {}
};

class Derived : public Base
{
public:
    void printChild()
    {
        cout << "I'm in Child \n";
    }
};

int main()
{
    Base *b = new Derived();

    Derived *d = dynamic_cast<Derived *>(b);
    d->printChild();
    return 0;
}