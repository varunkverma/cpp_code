#include <iostream>
using namespace std;

void increment_value(void *data, int ptr_size)
{
    if (sizeof(char) == ptr_size)
    {
        char *char_ptr;

        char_ptr = (char *)data;
        (*char_ptr)++;
    }
    else if (sizeof(int) == ptr_size)
    {
        int *int_ptr;
        int_ptr = (int *)(data);
        (*int_ptr)++;
    }
    else
    {
        cout << "only char and int supported" << endl;
    }
}

void geeks()
{
    int i = 10;
    char j = 'h';
    double f = 10.2;

    increment_value(&i, sizeof(i));
    increment_value(&j, sizeof(j));
    increment_value(&f, sizeof(f));
    cout << i << " " << j << " " << f << endl;
}

int main()
{
    geeks();
    return 0;
}