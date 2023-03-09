#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){ // Without this default constructor we cannot initialize the objects without parameters like in main Number x, y;
            a = 0; 
        }
        Number(int num){
            a = num;
        }
        Number(Number &obj){ // When no copy constructor is found, the compiler supplies its own copy constructor
            cout<<"Copy constructor called!!"<<endl;
            a = obj.a;
            // Two objects of the same class can access each others private data
        }
        void display(){
            cout<<"The number for this object is "<<a<<endl;
        }
};
int main(){
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();
    
    //  z1 will ressemble x, y or z depending upon which is given as parameter 
    Number z1(x);  // Copy constructor is invoked
    z1.display(); 

    z2 = z; // Copy constructor is not invoked
    z2.display(); 

    Number z3 = z; // Copy constructor is invoked
    z3.display(); 

    return 0;
}