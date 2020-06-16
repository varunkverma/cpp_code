#include <iostream>
using namespace std;

class Student
{
private:
    int roll;

public:
    Student(int r) : roll(r){};

    void fun() const
    {
        (const_cast<Student *>(this))->roll = 4;
    }
    int getRoll()
    {
        return roll;
    }
};

int main()
{
    Student s(3);
    cout << "Old roll number: " << s.getRoll() << endl;

    s.fun();

    cout << "New roll number: " << s.getRoll() << endl;

    return 0;
}