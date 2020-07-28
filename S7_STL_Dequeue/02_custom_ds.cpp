#include <iostream>
#include <deque>
using namespace std;
deque<int> custom_deque;

void insertMin(int x)
{
    if (x < custom_deque[0])
    {
        custom_deque.push_front(x);
    }
}

void insertMax(int x)
{
    if (x > (custom_deque.back()))
    {
        custom_deque.push_back(x);
    }
}

int getMin()
{
    return custom_deque.front();
}

int getMax()
{
    return custom_deque.back();
}

int extractMin()
{
    int res = custom_deque.front();
    custom_deque.pop_front();
    return res;
}

int extractMax()
{
    int res = custom_deque.back();
    custom_deque.pop_back();
    return res;
}

int main()
{
    insertMin(5);
    insertMax(10);
    insertMin(3);
    insertMax(15);
    insertMin(2);
    cout << getMin() << endl;
    cout << getMax() << endl;
    insertMin(1);
    cout << getMin() << endl;
    insertMax(20);
    cout << getMax() << endl;

    return 0;
}
