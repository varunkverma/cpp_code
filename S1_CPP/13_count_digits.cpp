#include <iostream>
using namespace std;
int main()
{

    unsigned long long int x = 123456422;

    int count = 0;

    do
    {
        count++;
        x /= 10;
    } while (x);

    cout << "No. of digits: " << count;

    return 0;
}