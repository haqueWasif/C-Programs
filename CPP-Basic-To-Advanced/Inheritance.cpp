// Inheritance helps in reusablity which is a very important feature of oops
#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
    Employee() {}
};

// Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    new class members/methods/etc...
}
Note:
1. Default visibility mode is private
2. Private visibility mode: Public members of base class becomes private members of the derived class
3. Public visibility mode: Public members of base class becomes public members of the derived class
4. Private members of the base class cannot be inherited
*/

// Creating a programmer derived class from employee base class
class Programmer : Employee
{
public:
    int languageCode;
    Programmer(int inpid)
    {
        id = inpid;
        languageCode = 9;
    }

    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    skillF.getData();
    return 0;
}