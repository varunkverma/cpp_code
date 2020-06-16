#include <iostream>
using namespace std;

int add(int x, int y) { return x + y; }
string add(string x, string y) { return x + y; }

int main()
{

    int (*func_ptr_int)(int, int) = add;
    string (*func_ptr_string)(string, string) = add;

    cout << func_ptr_int(1, 2) << endl;
    cout << func_ptr_string("hello ", "world") << endl;
    return 0;
}