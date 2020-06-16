#include <iostream>
using namespace std;

int main()
{

    char str[]{'q', 'w', 'e', 'r', '\0'};

    const char *char_ptr = str;

    cout << *(char_ptr + 3) << endl;

    cout << char_ptr[3];

    return 0;
}