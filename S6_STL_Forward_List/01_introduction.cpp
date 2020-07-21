#include <iostream>
#include <forward_list>
using namespace std;

void fun_assign_remove()
{
    forward_list<int> fl{10, 20, 30, 40};
    fl.push_front(50);
    fl.push_front(60);
    fl.pop_front();
    for (int &x : fl)
    {
        cout << x << " ";
    }
    cout << endl;

    fl.assign({1, 6, 2, 3, 4, 5, 6});
    forward_list<int> fl2;
    fl2.assign(fl.begin(), fl.end());
    fl.remove(6); // removes all the occurances
    for (forward_list<int>::iterator it = fl.begin(); it != fl.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (forward_list<int>::iterator it = fl2.begin(); it != fl2.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    forward_list<int> fl3;
    fl3.assign(5, 10);
    for (forward_list<int>::iterator it = fl3.begin(); it != fl3.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void fun_insert_emplace_erase()
{
    forward_list<int> fl{10, 20, 30, 40};
    forward_list<int>::iterator it = fl.insert_after(fl.begin(), 5);
    it = fl.insert_after(it, {6, 7, 8, 9});
    it = fl.emplace_after(it, 50); // same as insert_after(), only optimised for non-primitive types
    it = fl.erase_after(it);       // removes only the next node
    it = fl.erase_after(it, fl.end());
    for (int &x : fl)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    forward_list<int> fl{10, 20, 30, 40};
    fl.reverse();
    for (int &x : fl)
    {
        cout << x << " ";
    }
    cout << endl;

    forward_list<int> fl2{10, 20, 30};
    forward_list<int> fl3{5, 15, 25};
    fl2.merge(fl3); //merge sort, stored in fl2 and fl3 gets empty
    for (int &x : fl2)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "Is fl3 empty? " << fl3.empty() << endl;

    return 0;
}