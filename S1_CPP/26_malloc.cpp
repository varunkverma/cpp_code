#include <iostream>
using namespace std;

int main()
{

    // This pointer will hold the vase address of the block created

    int *ptr;
    int n, sum = 0;

    // get the no. of elements
    n = 5;

    cout << "No. of elemenets: " << n << endl;

    // Dynamically allocate memory using malloc()
    ptr = (int *)malloc(n * sizeof(int));

    // check if memory was allocated
    if (ptr == nullptr)
    {
        cout << "Memory allocation failed" << endl;
        exit(0);
    }
    else
    {
        // Memory has been successfully allocated
        cout << "Memory successfully allocated using malloc" << endl;

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