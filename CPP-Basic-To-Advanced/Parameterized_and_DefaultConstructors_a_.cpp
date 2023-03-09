#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        Complex(int x , int y); // Constructor declaration
        void printNumber(){
            cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

Complex :: Complex(int x, int y){ // --> This is a parameterized constructor as it accepts 2 parameters
    a = x;
    b = y;
}
int main(){
    // Implicit call
    Complex c(4, 6);
    c.printNumber();
    // Explicit call
    Complex d = Complex(4,6);
    d.printNumber();
    return 0;
}