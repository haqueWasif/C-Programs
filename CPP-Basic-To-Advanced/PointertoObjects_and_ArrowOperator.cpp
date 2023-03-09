#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        Complex(void) : real(0), imaginary(0){};
        Complex(int a, int b) : real(a), imaginary(b){};
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
        void getData(){
            cout<<"The real part is "<< real<< endl;
            cout<<"The imaginary part is "<< imaginary<< endl;
        }
};   

int main(){
    // Complex c1(1, 2);
    // c1.getData();
    // Complex *ptr = &c1;
    Complex* ptr = new Complex(1,2);
    // (*ptr).getData(); is exactly same as ptr -> getData(); 
    ptr -> getData(); // -> means dereference the pointer and run the getData() function of the object pointed by ptr
    // Array of Objects 
    Complex* ptr1 = new Complex[3];
    ptr1 -> setData(1,2);
    ptr1 -> getData();
    (ptr1+1) -> setData(2,3);
    (ptr1+1) -> getData();
    (ptr1+2) -> setData(3,4);
    (ptr1+2) -> getData();
    
    return 0;
}