#include <iostream>
#include <vector>

using namespace std;
int main()
{

    vector<pair<int, int>> v = {
        {1, 1},
        {2, 2},
        {3, 3}};

    for (auto p : v)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}