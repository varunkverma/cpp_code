#include <iostream>
#include <stdarg.h>

using namespace std;

double average(int num, ...)
{
    double sum{0.0};

    va_list args;

    // va_start(args, num);
    // for (int i = 0; i < num; i++)
    // {
    //     cout << va_arg(args, int) << endl;
    //     // cout << va_arg(args, double) << endl;
    // }
    //va_end(args);

    va_start(args, num);
    for (int i = 0; i < num; i++)
    {
        sum += va_arg(args, double);
    }
    va_end(args);

    return sum / num;
}

int main()
{
    cout << average(3, 1, 2.5, 3) << endl;
    cout << average(5, 1, 2, 3, 4, 5) << endl;
    return 0;
}