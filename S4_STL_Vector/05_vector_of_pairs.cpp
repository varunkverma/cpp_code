#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int my_pair_cmp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first > p2.first;
}

int main()
{
    vector<int> rolls{101, 108, 103, 105};
    vector<int> marks{70, 80, 40, 90};
    vector<pair<int, int>> sorted_marks;
    for (int i = 0; i < rolls.size(); i++)
    {
        sorted_marks.push_back(make_pair(marks[i], rolls[i]));
    }
    for (auto &x : sorted_marks)
    {
        cout << x.second << " " << x.first << endl;
    }
    cout << endl;
    // for (int i = 0; i < sorted_marks.size() - 1; i++)
    // {
    //     for (int j = i + 1; j < sorted_marks.size(); j++)
    //     {
    //         if (sorted_marks[i].first < sorted_marks[j].first)
    //         {
    //             auto temp = sorted_marks[i];
    //             sorted_marks[i] = sorted_marks[j];
    //             sorted_marks[j] = temp;
    //         }
    //     }
    // }

    //sort(sorted_marks.begin(), sorted_marks.end(), my_pair_cmp);
    sort(sorted_marks.begin(), sorted_marks.end(), greater<pair<int, int>>());

    for (auto &x : sorted_marks)
    {
        cout << x.second << " " << x.first << endl;
    }
    return 0;
}