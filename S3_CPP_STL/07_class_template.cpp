#include <iostream>
using namespace std;

template <typename T>
struct Pair
{
    T x, y;
    Pair(T i, T j) : x(i), y(j) {}
    T getFirst() { return x; }
    T getSecond() { return y; }
};

template <typename T1, typename T2>
struct Pair2
{
    T1 x;
    T2 y;
    Pair2(T1 i, T2 j) : x(i), y(j) {}
    T1 getFirst();
    T2 getSecond() { return y; }
};

template <typename T1, typename T2>
T1 Pair2<T1,T2>::getFirst(){
    return x;
}

int main()
{
    Pair<int> p1(10, 20);
    cout << p1.getFirst() << " " << p1.getSecond() << endl;

    Pair2<int, string> p2(101, "John Doe");
    cout << p2.getFirst() << " " << p2.getSecond() << endl;

    return 0;
}