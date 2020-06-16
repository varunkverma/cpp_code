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
        cout << "Memory not allocated" << endl;
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

        cout << "The elements of the array are: " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << ptr[i] << " ";
        }
    }

    return 0;
}