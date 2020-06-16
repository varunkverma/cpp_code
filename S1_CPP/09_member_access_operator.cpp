#include <iostream>

using namespace std;

struct Test
{
    int x;
    int *p;
};

int main()
{
    struct Test t;
    struct Test *ptr_t = &t;

    t.x = 5;
    int b = 10;
    t.p = &b;

    cout << t.x << endl;
    cout << ptr_t->x << endl;
    cout << t.p << endl;
    cout << ptr_t->p << endl;
    cout << *(t.p) << endl;
    cout << *(ptr_t->p) << endl;

    return 0;
}
