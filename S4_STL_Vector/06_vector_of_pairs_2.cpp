#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> arr{20, 40, 30, 10};
    vector<pair<int, int>> sorted_data;
    for (int i = 0; i < arr.size(); i++)
    {
        sorted_data.push_back({arr[i], i});
    }
    sort(sorted_data.begin(), sorted_data.end());
    for (auto &x : sorted_data)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}