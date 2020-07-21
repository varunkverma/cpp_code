#include <iostream>
#include <list>
using namespace std;

int get_survivor(int n, int k)
{
    // create a linked list
    list<int> list_of_survivors;

    // populate it
    for (int i = 0; i < n; i++)
    {
        list_of_survivors.push_back(i);
    }

    // iterator to the beginnnig of the list_of_survivors
    list<int>::iterator it = list_of_survivors.begin();

    // perform the following operations till, the size of the list_of_survivors become 1.
    while (list_of_survivors.size() > 1)
    {
        // move k-1 steps/node
        for (int i = 1; i < k; i++)
        {
            it++;
            // check if the current position of it has become end, then move it to begin
            if (it == list_of_survivors.end())
            {
                it = list_of_survivors.begin();
            }
        }
        // remove the current k-1 positioned node pointed by the iterator
        it = list_of_survivors.erase(it);
        // if iterator is pointing at the end of the list_of_survivor, make it point at the begining
        if (it == list_of_survivors.end())
        {
            it = list_of_survivors.begin();
        }
    }
    return *(list_of_survivors.begin());
}

int main()
{
    cout << get_survivor(7, 3) << endl
         << get_survivor(8, 2) << endl;
    return 0;
}