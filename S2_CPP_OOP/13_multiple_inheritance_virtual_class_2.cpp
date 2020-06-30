#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    Person() : name("anonymous")
    {
        cout << "Person::Person()" << endl;
    };
    Person(string name) : name(name)
    {
        cout << "Person::Person(name)" << endl;
    };
};

class Faculty : virtual public Person
{
public:
    int fid;
    Faculty(string name, int fid) : Person(name), fid(fid)
    {
        cout << "Faculty: Faculty(name,fid)" << endl;
    }
};

class Student : virtual public Person
{
public:
    int sid;
    Student(string name, int sid) : Person(name)
    {
        cout << "Student: Student(name,sid)" << endl;
    }
};

class TA : public Faculty, public Student
{
public:
    TA(string name, int id) : Faculty(name, id), Student(name, id), Person(name)
    {
        cout << "TA::TA(name,id)" << endl;
    }
};

int main()
{
    TA *ta1 = new TA("Abel", 101); // Person::Person(name) will be called only once, but the paramterized one
    return 0;
}