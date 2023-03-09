#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // static variable initializes with 0 by default
    // declaring count as a static variable ensures that it is shared by all objects
    // so static variables are also called class variables in object oriented programming
public:
    void setData(void)
    {
        cout << "Enter the ID" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The Id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getCount(void){ // This is a static function which can only access the static members
        // cout<<id; // Throws an error 
        cout<<"The value of count is "<<count<<endl;
    }
};
// count is the static data member of class Employee
int Employee :: count;
 // we also have to declare it outside because the memory of this variable comes with class not object
// int Employee :: count=1000; // we can assign the static variable a value but have to do it outside class otherwise it will through an error
int main()
{
    Employee harry, rohan, akash;
    // harry.id = 1;
    // harry.count = 1;  // Cannot do this since id and count are private

    harry.setData();
    harry.getData();
    Employee::getCount(); 

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    akash.setData();
    akash.getData();
    Employee::getCount();

    return 0;
}