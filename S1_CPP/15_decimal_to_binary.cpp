#include <iostream>
#include <algorithm>
using namespace std;

string convert_decimal_to_binary(long long int deci)
{
    string bin;
    while (deci)
    {
        bin += (char)((deci & 1) + '0');
        deci >>= 1;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}

int main()
{
    int num1 = 7;
    int num2 = 8;
    int num3 = 29;

    cout << num1 << ": " << convert_decimal_to_binary(num1) << endl;
    cout << num2 << ": " << convert_decimal_to_binary(num2) << endl;
    cout << num3 << ": " << convert_decimal_to_binary(num3) << endl;

    return 0;
}