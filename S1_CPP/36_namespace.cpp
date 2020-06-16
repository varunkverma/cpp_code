#include <iostream>
#include "36_namespaces_A.h"
#include "36_namespace_B.h"

using namespace std;

int main()
{
    cout << Mul::compute(10, 20) << endl;
    cout << Add::compute(10, 20) << endl;
    return 0;
}