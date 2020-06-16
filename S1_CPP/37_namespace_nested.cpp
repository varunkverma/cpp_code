#include <iostream>
#include "37_namespace_nested.h"
using namespace std;

int main()
{
    cout << compute::String::add("Hello", " World") << endl;
    cout << compute::Int::add(10, 20) << endl;
    return 0;
}