#include <iostream>
using namespace std;

template <typename T>

T arr_max(T arr[], int n)
{
    T res = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (res < arr[i])
        {
            res = arr[i];
        }
    }
    return res;
}

int main()
{

    int arr1[]{10, 3, 20, 1};
    cout << arr_max(arr1, 4) << endl;

    char arr2[]{'d', 'q', 'h', 'z', 'a'};
    cout << arr_max<char>(arr2, 5) << endl; // better practice

    return 0;
}