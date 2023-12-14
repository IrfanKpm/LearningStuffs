#include <iostream>
#include <string>
using namespace std;

class Staff
{
private:
    // members cannot be accessed (or viewed) from outside the class
    // The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.
    float salery;

public:
    // public : members are accessible from outside the class
    int id;
    string name;
    string position;

    Staff(int x, string y, string z)
    {
        /*
        > A constructor in C++ is a special method that is automatically
         called when an object of a class is created.
        > To create a constructor, use the same name as the class,
         followed by parentheses ():
         */
        id = x;
        name = y;
        position = z;
        cout << "Staff object created successfully.\n";
    }

    void CallName()
    {
        cout << "Hello, my name is " << name;
    }

    // To access a private attribute, use public "get" and "set" methods:
    void setSallery(float s)
    {
        salery = s;
    }
    float getSallery()
    {
        return salery;
    }
};

//  Inherit attributes and methods from one class to another.
// We group the "inheritance concept" into two categories
class Developer : public Staff
{
private:
    float increment_rate = 1.2;

public:
    Developer(int x, string y, string z) : Staff(x, y, z)
    {
        // Developer constructor code here
    }
    string CallPosition()
    {
        return "Developer";
    }
};

main()
{
    Staff staff1(01, "irfan", "Developer");
    staff1.CallName();
    cout << endl
         << staff1.id << " :: " << staff1.name << endl;

    Staff staff3(03, "salman", "AI Engineer");
    staff3.setSallery(120000);
    cout << staff3.getSallery() << endl;

    Developer dev1(04, "sahil", "Developer");
    cout << dev1.CallPosition();
    return 0;
}