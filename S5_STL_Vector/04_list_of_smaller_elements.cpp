#include <iostream>
#include <vector>
using namespace std;

vector<int> filter_out_smaller_elements(vector<int> input_vec, int ele)
{
    vector<int> filtered_vec;
    for (vector<int>::iterator it = input_vec.begin(); it != input_vec.end(); it++)
    {
        if (*it < ele)
        {
            filtered_vec.push_back(*it);
        }
    }
    return filtered_vec;
}

int main()
{
    vector<int> arr{10, 20, 15, 3, 6, 1, 18};
    int k = 9;
    vector<int> filtered_vec = filter_out_smaller_elements(arr, k);
    for (auto &x : filtered_vec)
    {
        cout << x << " ";
    }
    return 0;
}
