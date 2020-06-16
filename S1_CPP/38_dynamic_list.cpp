#include <iostream>
using namespace std;

// global declaration to point at the start and end of the list and the size
int *start, *last;
int size;

void insert(int x)
{
    // if list is empty
    if (!start)
    {
        // initialize list
        start = (int *)malloc(sizeof(int));
        size = 1;
        last = start;
        // insert element at the last place
        *last = x;
        return;
    }
    // list if full
    else if (last - start + 1 == size)
    {
        // re-allocate new memory space, which is twice the original size
        size <<= 1;
        start = (int *)realloc(start, size * sizeof(int));
    }

    // increment the last pointer and insert at the end
    *(++last) = x;
}

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);

    int *temp = start;
    int num = last - start + 1;
    while (num--)
    {
        cout << *temp << " ";
        temp++;
    }
    return 0;
}