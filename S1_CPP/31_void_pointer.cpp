#include <iostream>
using namespace std;

int main()
{

    int x = 5;
    float f = 6.5;
    string s = "Hello World";

    void *p;

    p = &x;
    cout << *(static_cast<int *>(p)) << endl;
    p = &f;
    cout << *(static_cast<float *>(p)) << endl;
    p = &s;
    cout << *(static_cast<string *>(p)) << endl;

    return 0;
}