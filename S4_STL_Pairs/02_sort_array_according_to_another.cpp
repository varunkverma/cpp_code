#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
void priority_sort(int arr1[], char arr2[], int n)
{
    vector<pair<int, char>> res;
    for (int i = 0; i < n; i++)
    {
        res.push_back({arr1[i], arr2[i]});
    }
    sort(res.begin(), res.end());
    for (auto i : res)
    {
        cout << i.first << " " << i.second << endl;
    }
}

int main()
{
    int a[]{3, 1, 2,1};
    char c[]{'G', 'E', 'K','A'};
    priority_sort(a, c, 4);
    return 0;
}