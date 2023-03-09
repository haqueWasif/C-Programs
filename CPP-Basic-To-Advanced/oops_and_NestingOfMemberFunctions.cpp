// OOPs - Classes and Objects
// C++ --> initially called --> C with classes by stroustroup
// class --> extention of structures (in C)
// structures had limitations
//      --> members are public
//      --> No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private and few as public
// structures in C++ are typedefed
// you can declare objects along with the class declaration
/* class Employee{
   // class definition
   } harry, rohan, akash; */

// Nesting of member functions

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s; // it is a private member since by default everything in class is private
    // void chk_bin(void); // If we use chk_bin here then it will be a private function which can only be called using only methods of the class not by the user
public:
    void read(void);
    void chk_bin(void); 
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "Displaying you binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{
    binary b;
    b.read();
    // b.chk_bin(); // we are hiding the binary checking function from the user and implementing it by nesting it in another function
    b.ones_compliment();
    b.display();

    return 0;
}