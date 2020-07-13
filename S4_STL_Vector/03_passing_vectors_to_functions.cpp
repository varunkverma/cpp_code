#include <iostream>
#include <vector>
using namespace std;

void fun(vector<int> v)
{
    // will not effect the original vector
    v.push_back(10);
    v.push_back(20);
}
void fun_ref(vector<int> &v)
{
    // will effect the original vector And good for efficiency
    v.push_back(10);
    v.push_back(20);
}
void fun_const(const vector<int> &v)
{
    // will effect the original vector And good for efficiency and const makes sure, that vector cannot be mutated
    //v.push_back(10);
    //v.push_back(20);
}

int main()
{

    vector<int> v{1, 4, 5};
    fun(v);
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    fun_ref(v);
    for (auto &x : v) // efficient, especially in case of vector of user-defined types
    {
        cout << x << " ";
    }
    cout << endl;
    for (const auto &x : v) // efficient, especially in case of vector of user-defined types and prevents accidental modification
    {
        cout << x << " ";
    }
    return 0;
}