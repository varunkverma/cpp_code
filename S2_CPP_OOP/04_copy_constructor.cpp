// You need to define a copy contructor in a class only if a class has a member function of reference/pointer type
#include <iostream>
using namespace std;

// class without copy constructor
class Array1
{
public:
    int n;
    int *ref;

    Array1(int n) : n(n)
    {
        ref = new int[n];
        for (int i = 0; i < n; i++)
        {
            *(ref + i) = i + 1;
        }
    }
};

// class with copy constructor
class Array2
{
public:
    int n;
    int *ref;

    Array2(int n) : n(n)
    {
        ref = new int[n];
        for (int i = 0; i < n; i++)
        {
            *(ref + i) = i + 1;
        }
    }

    // copy contructor
    Array2(Array2 &obj) : n(obj.n)
    {
        ref = new int[obj.n];
        for (int i = 0; i < obj.n; i++)
        {
            *(ref + i) = *(obj.ref + i);
        }
    }
};

// class with copy constructor

int main()
{
    // Shallow Copy
    Array1 arr1(10);

    Array1 arr2 = arr1;
    arr2.n = 2; // value type don't get reflected

    // pointer/reference type does
    for (int i = 0; i < 10; i++)
    {
        *(arr2.ref + i) = i * 2;
    }
    cout << "Shallow copy:" << endl;
    cout << "Size: " << arr1.n << endl;
    cout << "Elements: " << endl;
    for (int i = 0; i < arr1.n; i++)
    {
        cout << *(arr1.ref + i) << " ";
    }
    cout << endl;
    // Deep Copy
    Array2 arr3(10);

    Array2 arr4 = arr3;
    arr4.n = 2; // value type don't get reflected

    // pointer/reference type does
    for (int i = 0; i < 10; i++)
    {
        *(arr4.ref + i) = i * 2;
    }
    cout << "Deep copy:" << endl;
    cout << "Size: " << arr3.n << endl;
    cout << "Elements: " << endl;
    for (int i = 0; i < arr3.n; i++)
    {
        cout << *(arr3.ref + i) << " ";
    }

    return 0;
}