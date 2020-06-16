#include <iostream>
using namespace std;

int main()
{
    float f = 3.5;

    // how it's in c;
    int a = f;

    // how it's done in C++
    int b = static_cast<int>(f);
    cout << b;
    return 0;
}