#include <iostream>
using namespace std;

int main()
{

    int *ptr_1, *ptr_2;

    int n, i, sum = 0;

    n = 5;

    // Dynamically allocate memory using malloc()
    ptr_1 = (int *)malloc(n * sizeof(i));

    // Dynamically alloate memory using calloc()
    ptr_2 = (int *)calloc(n, sizeof(int));

    if (ptr_1 == nullptr || ptr_2 == nullptr)
    {
        cout << "Memory not allocated" << endl;
        exit(0);
    }
    else
    {
        // Memory has been successfully allocated
        cout << "Memory successfully allocated using malloc" << endl;

        // free the memory
        free(ptr_1);
        cout << "Malloc Memory successfully freed" << endl;

        // Memory has been successfully allocated
        cout << endl
             << "Memory successfully allocated using calloc" << endl;

        // Free the memory
        free(ptr_2);
        cout << "Calloc Memory successfully freed" << endl;
    }

    return 0;
}