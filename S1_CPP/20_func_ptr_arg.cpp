#include <iostream>
#include <algorithm>

using namespace std;

void sort(int arr[], int n, bool (*compare)(int, int))
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (!compare(arr[j], arr[j + 1]))
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

bool asc(int a, int b) { return a < b; }
bool desc(int a, int b) { return a > b; }

int main()
{

    bool (*compare_asc)(int, int) = asc;
    bool (*compare_desc)(int, int) = desc;

    int a[]{0, 2, 1, 5, 7, 12, -1};

    sort(a, 7, compare_asc);

    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << endl;

    sort(a, 7, compare_desc);

    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}