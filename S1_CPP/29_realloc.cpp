#include <iostream>
using namespace std;

int main()
{

    int *ptr;
    int n, sum = 0;

    n = 5;

    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == nullptr)
    {
        cout << "Memory not aallocated" << endl;
        exit(0);
    }
    else
    {
        // Memory has been successfully allocated
        cout << "Memory successfully allocated using calloc" << endl;

        for (int i = 0; i < n; i++)
        {
            ptr[i] = i + 1;
        }

        // Print the elements of the array
        cout << "The elements of the array are: " << endl;
        for (int i = 0; i < n; ++i)
        {
            cout << ptr[i] << ", ";
        }

        // Chaning the size
        n = 10;
        cout << "New size: " << n;

        ptr = (int *)realloc(ptr, n * sizeof(int));

        // Memory has been successfully allocated
        cout << "Memory successfully re-allocated" << endl;
        for (int i = 5; i < n; i++)
        {
            ptr[i] = i + 1;
        }

        for (int i = 5; i < n; i++)
        {
            cout << ptr[i] << ", ";
        }
        free(ptr);
    }

    return 0;
}