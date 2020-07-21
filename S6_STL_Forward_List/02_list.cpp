#include <iostream>
#include <list>

using namespace std;

void fun_push()
{
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_front(5);
    for (auto &x : l)
    {
        cout << x << " ";
    }
    cout << endl;
}

void fun_pop()
{
    list<int> l{10, 20, 30, 40};
    l.pop_front();
    l.pop_back();
    for (list<int>::iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void fun_insert_front_back()
{
    list<int> l{10, 20, 30, 40};

    auto it = l.begin();

    it = l.insert(it, 15);

    l.insert(it, 2, 7);

    for (list<int>::iterator it2 = l.begin(); it2 != l.end(); it2++)
    {
        cout << *it2 << " ";
    }
    cout << endl;
    cout << l.front() << " " << l.back() << endl;
    cout << l.size();
}

void fun_remove_erase()
{
    list<int> l{10, 20, 30, 40};

    auto it = l.begin();

    it = l.erase(it);
    l.remove(40);

    for (list<int>::iterator it2 = l.begin(); it2 != l.end(); it2++)
    {
        cout << *it2 << " ";
    }
    cout << endl;
    list<int> l2{1, 5, 10, 50, 60, 70, 80};

    l.merge(l2);
    for (list<int>::iterator it2 = l.begin(); it2 != l.end(); it2++)
    {
        cout << *it2 << " ";
    }
    cout << endl;

    cout << "Is l2 empty? " << l2.empty() << endl;
}

int main()
{
    list<int> l{10, 20, 20, 30, 30, 30, 10};

    l.unique();
    for (list<int>::iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    l.sort();
    for (list<int>::iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    l.reverse();
    for (list<int>::iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}