#include <iostream>

using namespace std;

struct Employee
{
    string name;
    int age;
    double salary;
    bool remote;
};

int main()
{
    Employee e{"Dave", 23, 2.5, true};

    cout << e.name << endl;

    Employee *e_ptr = &e;
    cout << e_ptr->name;

    return 0;
}