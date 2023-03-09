#include<iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class Base2{
    public:
        void greet(){
            cout<<"Kmon aso?"<<endl;
        }
};

class Derived : public Base1, public Base2{
    int a;
    public:
        void greet(){
            Base1 :: greet();
        }
    };

class B{
    public:
        void say(){
            cout<<"Hello World! 1"<<endl;
        }
};

class D : public B{
    int a;
    // D's new say() method will ovverride base class's say() method
    public:
        void say(){
            cout<<"Hello World! 2"<<endl;
        }
};
int main(){
    // Ambiguity 1

    // Base1 base1obj;
    // Base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();
    // Derived d;
    // d.greet();

    // Ambiguity 2
    B b;
    D d;
    b.say();
    d.say(); // say() of inherited class is overwritten by say() of derived class
    return 0;
}