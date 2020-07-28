#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> dq = {10, 20, 30};
    dq.push_front(5);
    dq.push_back(50);
    for (deque<int>::iterator it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout << dq.front() << endl
         << dq.back() << endl;

    deque<int>::iterator it = dq.begin();
    it++;
    dq.insert(it, 7);
    dq.pop_front();
    dq.pop_back();
    cout << dq.size() << endl;

    it = dq.begin();
    it = dq.insert(it, 4);
    it = dq.insert(it, 2, 3);
    for (int i = 0; i < dq.size(); i++)
    {
        cout << dq[i] << " ";
    }
    cout << endl;
    it = dq.erase(it + 2);
    for (int i = 0; i < dq.size(); i++)
    {
        cout << dq[i] << " ";
    }
    cout << endl;
    return 0;
}