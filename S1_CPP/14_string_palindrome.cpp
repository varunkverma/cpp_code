#include <iostream>
using namespace std;

bool check_palindorme(string str)
{
    int len = str.length();

    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string s1{"kayak"}, s2{"kappa"};

    if (check_palindorme(s1))
    {
        cout << s1 << " is palindrome" << endl;
    }
    else
    {
        cout << s1 << " is not palindrome" << endl;
    }

    if (check_palindorme(s2))
    {
        cout << s2 << " is palindrome" << endl;
    }
    else
    {
        cout << s2 << " is not palindrome" << endl;
    }
    return 0;
}