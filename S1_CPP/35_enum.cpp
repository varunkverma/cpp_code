#include <iostream>
using namespace std;

enum Week
{
    Mon,
    Tue,
    Wed,
    Thur,
    Fri,
    Sat,
    Sun
};
int main()
{
    Week day;
    day = Week::Fri;
    cout << day << endl;
    return 0;
}