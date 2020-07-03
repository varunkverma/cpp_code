#include <iostream>
using namespace std;

template <typename T>
T my_max(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{

    cout << my_max(2, 8) << endl;
    cout << my_max('t', 'a') << endl;
    return 0;
}