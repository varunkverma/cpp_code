#include <iostream>
using namespace std;

class Person
{
private:
    long number;

protected:
    string email;

public:
    string name;

    Person(string name, string email, long number) : name(name), email(email), number(number) {}

    void talk()
    {
        cout << "Hello, i'm " << name << endl;
    }
    long getNumber()
    {
        return this->number;
    }
    void setNumber(long newNumber)
    {
        this->number = newNumber;
    }
};

class Employee : Person
{
public:
    string empCode;

    Employee(string empCode, string name, string email, long number) : Person(name, email, number), empCode(empCode) {}

    void PrintInfo()
    {
        cout << "Employee Name: " << this->name << endl;
        cout << "Employee Code: " << this->empCode << endl;
        cout << "Employee Email: " << this->email << endl;
    }
};

int main()
{
    Person *ptr_person = new Person("John", "John@gmail.com", 999998989);
    cout << ptr_person->name << endl;

    Employee *emp_ptr = new Employee("E101", "Ed", "Ed@gmail.com", 123124124);
    emp_ptr->PrintInfo();

    return 0;
}