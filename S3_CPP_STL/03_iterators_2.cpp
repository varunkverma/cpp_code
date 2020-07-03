#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec{10, 20, 30, 40, 50};

    // iterator to a vector's beginning
    vector<int>::iterator i = vec.begin(); // auto i = vec.begin()

    // next and prev
    cout << (*i) << endl;
    i = next(i);
    cout << (*i) << endl;
    i = next(i, 2);
    cout << (*i) << endl;
    i = vec.end();
    i = prev(i);
    cout << (*i) << endl;
    i = prev(i, 2);
    cout << (*i) << endl;
    i = vec.begin();

    // advance
    advance(i, 3);
    cout << (*i) << endl;

    return 0;
}