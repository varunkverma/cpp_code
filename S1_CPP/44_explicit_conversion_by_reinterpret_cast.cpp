#include <iostream>
using namespace std;

typedef struct Test
{
    int x, y;
} Test;

int main()
{
    Test *ptr_T = new Test();

    // problem - invalid type cast
    //int *ptr_i=static_cast<int *>(ptr_T);

    int *ptr_i = reinterpret_cast<int *>(ptr_T);
    cout << *ptr_i << endl;
    return 0;
}