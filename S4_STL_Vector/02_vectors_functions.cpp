#include <iostream>
#include <vector>
using namespace std;

int fun1()
{
    // pop_back(), front() and back()
    vector<int> v{10, 20, 30, 40};
    v.pop_back();
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;

    v.front() = 100;
    v.back() = 400;
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

int insert_fun()
{
    vector<int> v{10, 20, 30, 40};
    vector<int>::iterator it = v.insert(v.begin(), 5);
    v.insert(v.begin() + 2, 15);
    v.insert(v.begin(), 4, 25); //(starting place, no. of times, element)
    for (auto i1 : v)
    {
        cout << i1 << " ";
    }
    cout << endl;

    vector<int> v2;
    v2.insert(v2.begin(), v.begin(), v.begin() + 3); // goes from 0 to (0 + (3-1))
    for (auto i2 : v2)
    {
        cout << i2 << " ";
    }
    cout << endl;
    return 0;
}

int erase_fun()
{

    vector<int> v{10, 20, 30, 40, 50};
    v.erase(v.begin()); // takes 1 iterator
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    v.erase(v.begin(), v.end()); // takes 2 iterators, removes all the element, from begin and end-1 positions
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}

int clear_fun()
{
    vector<int> v{10, 20, 30, 40};
    v.clear();
    cout << v.size() << " ";
    if (v.empty() == true)
    {
        cout << "Empty";
    }
    else
    {
        cout << "Not Empty";
    }
    return 0;
}

int main()
{
    vector<int> v{10, 20, 30, 40};

    v.resize(3);
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    v.resize(5);
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    v.resize(8, 100);
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}