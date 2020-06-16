#include <iostream>
using namespace std;

int add(int a, int b = 0)
{
    return a + b;
}

int main()
{
    cout << add(1, 2) << endl
         << add(2);
    return 0;
}