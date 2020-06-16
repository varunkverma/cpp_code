#include <iostream>
using namespace std;

inline int max_int(int x, int y) { return (x > y) ? x : y; }

int main()
{

    cout << max_int(10, 20) << endl;
    cout << max_int(100, 20) << endl;

    return 0;
}