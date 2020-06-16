#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    // char str1[4];
    // char str2[] = {'G', 'e', 'e', 'k', 's'};
    // // cin >> str1;
    // cout << str2 << endl;

    char str[11] = "hello";
    // for (int i = 0; i < strlen(str); i++)
    // {
    //     cout << str[i];
    // }
    char str2[] = " world";

    // char a[] = "abc";
    // char b[] = "aac";
    // char c[] = "bcd";

    // cout << strcmp(a, b) << endl;
    // cout << strcmp(a, a) << endl;
    // cout << strcmp(a, c) << endl;

    // cout << strcat(str, str2) << endl;

    // strcpy(str, str2);
    // cout << str << endl;

    char s1[] = "abcdefghijklmnopq";
    char s2[] = "ijk";

    char *p = strstr(s1, s2);
    char *q = strstr(s1, "2");

    if (p)
    {
        cout << "p: " << p << "  *p: " << *p << endl;
    }

    cout << "q: " << q << " *q: " << *q;

    return 0;
}