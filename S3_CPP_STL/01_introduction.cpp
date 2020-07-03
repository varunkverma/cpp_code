#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[]{10, 3, 9, 1};
    sort(arr, arr + 4);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    if (binary_search(arr, arr + 4, 8))
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }
    return 0;
}