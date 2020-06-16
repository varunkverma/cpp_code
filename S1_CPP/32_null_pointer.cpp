#include <iostream>
using namespace std;

void fun(int x) { cout << "Integer call: " << x << endl; }
void fun(int *x) { cout << "Pointer call: " << x << endl; }

int main()
{
    int *p = nullptr;
    fun(0);
    fun(p);
    return 0;
}