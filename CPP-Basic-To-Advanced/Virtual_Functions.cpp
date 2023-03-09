#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base=1;
        virtual void display(){ // including virtual means run the display() of derived class not the base class
            cout<<"Displaying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying Base class variable var_base "<<var_base<<endl;
            cout<<"Displaying Derived class variable var_derived "<<var_derived<<endl;
        }
};

int main(){
    BaseClass* base_class_ptr;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_ptr = &obj_derived;
    base_class_ptr -> display();
    
    // So which function is to be called for base_class_ptr this decision can be made by just seeing the program but the binding which is associating the address of the function to object this is done during run time which is called run time polymorphism
    
    return 0;
}

// So virtual function is used just to overwrite this default behaviour when a pointer of a base class points to object of derived class