#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, int> p1(10, 20);
    pair<int, string> p2(10, "Hello world");
    p1 = make_pair(30, 40); // redundant
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;

    pair<int, int> p3(1, 9), p4(1, 9), p5(3, 6);
    cout << boolalpha;
    cout << (p3 == p4) << endl;
    cout << (p3 != p5) << endl;
    cout << (p3 <= p5) << endl;
    cout << (p3 >= p5) << endl;

    pair<int, int> p6(p3);
    cout << p6.first << " " << p6.second << endl;

    p5.swap(p6);
    cout << p5.first << " " << p5.second << endl;
    cout << p6.first << " " << p6.second << endl;
    return 0;
}