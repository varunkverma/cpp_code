#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

char *p_chr;

class String
{
public:
    char *s;
    int size;
    String(char *c)
    {
        cout << "contsructor called" << endl;
        size = strlen(c);
        s = new char[size + 1];
        p_chr = s;
        strcpy(s, c);
    }
    ~String()
    {
        cout << "Destructor Called" << endl;
        delete[] s;
    }
};

void fun()
{
    string s = "string namelong number";
    char *c;
    c = new char[s.length() + 1];
    strcpy(c, s.c_str());
    String str(c);
}

int main()
{

    fun();
    cout << p_chr << endl;
    return 0;
}