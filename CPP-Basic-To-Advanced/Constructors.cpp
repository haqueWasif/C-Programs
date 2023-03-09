#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a constructor
    // Constructor is a special member function with same name as of the class
    // It is used to initialize the objects of its class
    // It is automatically invoked(executed) whenever an object is created

    Complex(void); // Constructor declaration
    void printNumber()
    {
        cout << "Your complex number is " << a << "+" << b << "i" << endl;
    }
};

Complex ::Complex(void) // --> This is a default constructor as it accepts no parameters
{
    a = 0;
    b = 0;
}
int main()
{
    Complex c;
    c.printNumber();
    return 0;
}

// Characteristics of a constructor
/*
    1. It should be declared in the public section of the class
    2. They are automatically invoked whenever an object is created
    3. They cannot return values as they do not have return types 
    4. It can have default arguments
    5. We cannot refer to their address

*/