#include <iostream>

using namespace std;

int main()
{
    char c1 = 'p', c2 = 'P';

    cout << (char)((c1 > 'a' && c1 < 'z') ? (c1 - 'a' + 'A') : (c1 - 'A' + 'a')) << endl;
    cout << (char)((c2 > 'a' && c2 < 'z') ? (c2 - 'a' + 'A') : (c2 - 'A' + 'a')) << endl;
    return 0;
}