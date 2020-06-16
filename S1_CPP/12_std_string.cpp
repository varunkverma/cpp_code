#include <iostream>

using namespace std;

int main()
{

    string s = "How do you do?";

    // declaring an iterator
    string::iterator it;

    // lopp over the string using iterator
    // for (it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    // cout << *(s.begin()) << endl;
    // cout << *(s.end() - 1);

    // cout << (s.find("dwo") == string::npos) << endl;
    string s1 = "abcdef";
    string s2 = "ef";
    string s3 = "gh";

    cout << s1.find(s2) << endl;

    if (s1.find("gh") == string::npos)
    {
        cout << s3 << " not found ";
    }
    return 0;
}