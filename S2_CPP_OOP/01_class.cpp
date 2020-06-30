#include <iostream>
using namespace std;

class Employee
{
public:
    string id, name;
    int years;

    Employee(string id, string name, int years) : id(id), name(name), years(years) {}

    void work()
    {
        cout << "Employee: " << this->id << " is working" << endl;
    }

    // proptotype declaration
    void sleep();
};

void Employee::sleep()
{
    cout << this->name << " is sleeping" << endl;
}

int main()
{
    // direct instantiation
    Employee emp1("101", "Jane", 12);
    cout << "Employee id: " << emp1.id << endl;
    cout << "Employee Name: " << emp1.name << endl;
    cout << "Employee Years of Experience: " << emp1.years << endl;
    emp1.work();
    cout << endl;
    //pointer instantiation
    Employee *emp_ptr = new Employee("102", "John", 4);
    cout << "Employee id: " << emp_ptr->id << endl;
    cout << "Employee Name: " << emp_ptr->name << endl;
    cout << "Employee Years of Experience: " << emp_ptr->years << endl;
    emp_ptr->work();
    cout << endl;

    emp_ptr->sleep();
    return 0;
}