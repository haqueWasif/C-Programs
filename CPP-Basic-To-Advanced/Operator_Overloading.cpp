#include<iostream>
using namespace std;

/*
returnType operator symbol (arguments) {
           ... .. ...
       } 
*/

class Complex{
    int real, img;
    public:
        Complex(int a=0, int b=0) : real(a), img(b){};
        Complex operator + (Complex obj){
            Complex res(real + obj.real , img + obj.img);
            return res; 
        }
        Complex operator * (Complex obj){
            Complex res((real * obj.real)-(img * obj.img) , (img * obj.real)+(real * obj.img));
            return res; 
        }
        void print(){cout<<real<<"+"<<img<<"i"<<endl;}  
};

int main(){
    Complex c1(1,2);
    Complex c2(3,4);
    Complex c3 = c1 + c2;
    Complex c4 = c1 * c2;
    c3.print();
    c4.print();
    
    return 0;

}