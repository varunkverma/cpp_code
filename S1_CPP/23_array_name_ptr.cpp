#include <iostream>
using namespace std;

int main()
{

    int val[3]{1, 2, 3};

    int *ptr = val;

    cout << "Elements are: " << endl;
    cout << ptr[0];

    return 0;
}