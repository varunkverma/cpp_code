#include <iostream>
#include <vector>

using namespace std;

int main1()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i] << " "; // doesn't do array out of bound index checking, will give run time error
        cout << v.at(i) << " "; // does do array out of bound index checking, will throw an exception
    }
    return 0;
}

int main2()
{
    vector<int> v{10, 20, 30, 40};
    for (int x : v)
    {
        x = 1;
    }

    // nothing will happen
    for (int x : v)
    {

        cout << x << " ";
    }
    cout << endl;

    // using reference, will modify the vector
    for (int &x : v)
    {
        x = 1;
    }
    for (int x : v)
    {

        cout << x << " ";
    }
    return 0;
}

int main3()
{

    int size = 3, default_value = 10;

    vector<int> v(size, default_value);

    // traversal using iterator
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}

int main()
{
    int arr[]{10, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(arr, arr + n); // most STL containers can be initialized like this i.e., using first address and address beyond the last element
    // reverse traversal, using revrse iterator
    for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // contant traversal, using constant iterator
    for (vector<int>::const_iterator it = v.cbegin(); it != v.cend(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}