#include <iostream>
using namespace std;

int main()
{

    int var = 10;

    cout << var << endl;

    int *ptr = &var;
    *ptr = 20;

    cout << var << endl;

    int **ptr_to_ptr = &ptr;
    **ptr_to_ptr = 30;

    cout
        << var << endl;

    return 0;
}