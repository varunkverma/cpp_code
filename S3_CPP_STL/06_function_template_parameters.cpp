#include <iostream>
using namespace std;

template <typename T, int limit> // limit's value needs to be a constant

T arr_max(T arr[], int n)
{
    if (n > limit)
    {
        cout << "size of array is more than the limit" << endl;
        return -1;
    }
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
    cout << arr_max<int, 6>(arr1, 4) << endl;

    char arr2[]{'d', 'q', 'h', 'z', 'a'};
    cout << arr_max<char, 2>(arr2, 5) << endl;

    return 0;
}