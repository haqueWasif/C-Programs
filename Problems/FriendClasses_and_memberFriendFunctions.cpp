#include <iostream>
using namespace std;

// Forward declaration
class Complex; // By declaring it at start the compiler knows that the class is present

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex); // if we directly define the function here then the compiler is unsure that the private variables a and b are present or not in the class so we only declare the function here
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // Indivitually declaring function as friends
    // friend int Calculator :: sumRealComplex(Complex o1, Complex o2);
    // friend int Calculator :: sumCompComplex(Complex o1, Complex o2);

    // Alternate: Declaring the entire calculator class as friend
    friend class Calculator;
    public:
        void setNumber(int n1, int n2)
        {
            a = n1;
            b = n2;
        }
        void printNumber()
        {
            cout << "Your number is " << a << " + " << b << "i" << endl;
        }
};

int Calculator :: sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator :: sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    int resReal = calc.sumRealComplex(o1, o2), resComp = calc.sumCompComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << resReal << endl;
    cout << "The sum of complex part of o1 and o2 is " << resComp << endl;
    return 0;
}