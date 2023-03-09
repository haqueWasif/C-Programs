#include<iostream>
using namespace std;

/*

1. We can use constructor in derived class in C++
2. If base class constructor does not have any arguments, there is no need of any constructor in derived class.
3. But if there are one or more arguments in the base class constructor, derived class need to pass arguments to the base class constructor.
4. If both base and derived classes have constructors, base class constructor is executed first.

*/

// In multiple inheritance, base classes constructors are executed in the order in which they appear in the derived class declaration

// In multilevel inheritance, the constructors are executed in the order of inheritance 

/* Special Syntax */
/*
Derived-Constructor (arg1, arg2, arg3, ....) : Base1-Constructor(arg1, arg2), Base2-Constructor(arg3, arg4){
    ... 
} 
*/

/* Special Case Of Virtual Base Class */

// The constructors for virtual base classes are invoked before non virtual base class
// If there are multiple virtual base classes, they are invoked in the order declared.
// Any non-virtual base class constructors are then executed before the derived class constructor is executed


/*

Case 1:
class B : public A{
    // Order of execution of constructor -> first A() then B()
};
class A : public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case 3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/

class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout << "Base 1 class constructor called"<<endl;
        }
        void printDataBase1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout << "Base 2 class constructor called"<<endl;
        }
        void printDataBase2(void){
            cout<<"The value of data2 is "<<data2<<endl;
        }
};

class Derived : public Base1, public Base2{ // Changing the order of Base1 and Base2 will change the order of execution of constructor
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d) : Base1(a), Base2(b){ // Changing the order of Base1() and Base2() here does not change anything
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor called"<<endl;
        }
        void printDataDerived(void){
            cout<<"The value of derived1 is "<<derived1<<endl;
            cout<<"The value of derived2 is "<<derived2<<endl;
        }
};
int main(){
    Derived dr(1,2,3,4);
    dr.printDataBase1();
    dr.printDataBase2();
    dr.printDataDerived();

    return 0;
}