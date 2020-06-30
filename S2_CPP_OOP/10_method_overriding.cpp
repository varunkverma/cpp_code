#include <iostream>
using namespace std;

class BaseClass
{
public:
    void whoami()
    {
        cout << "I'm Base" << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    void whoami()
    {
        cout << "I'm Derived" << endl;
    }
    void CompleteIntroduction(){
        BaseClass::whoami();
        this->whoami();
    }
};

int main(){
    BaseClass b;
    DerivedClass d;

    b.whoami();
    cout<<endl;
    d.whoami();
    cout<<endl;
    d.CompleteIntroduction();
    return 0;
}