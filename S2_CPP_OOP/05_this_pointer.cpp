#include <iostream>
using namespace std;

class Employee
{
public:
    int empId;
    string name;
    bool isPermanent;

    Employee &setEmpId(int empId)
    {
        this->empId = empId;
        return *this;
    }
    Employee &setName(string name)
    {
        this->name = name;
        return *this;
    }
    Employee &setIsPermanent(bool isPermanent)
    {
        this->isPermanent = isPermanent;
        return *this;
    }

    void PrintDetails()
    {
        cout << "Employee Details: " << endl;
        cout << "Name: " << this->name << endl;
        cout << "empId: " << this->empId << endl;
        cout << "isPermanent: " << boolalpha << this->isPermanent << endl;
    }
};

int main()
{

    Employee emp;

    emp.setEmpId(101)
        .setName("Shawn")
        .setIsPermanent(true)
        .PrintDetails();
    return 0;
}