#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        void display(){
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
    base_class_ptr = &obj_derived; // Pointing base class pointer to derived class

    base_class_ptr -> var_base = 34;
    base_class_ptr -> display(); 
    // base_class_ptr.display() this will call display() of BaseClass since the pointer is of the base class this is called late binding
    
    // base_class_ptr -> var_derived = 134; 
    // This will throw an error 

    DerivedClass* derived_class_ptr;
    derived_class_ptr = &obj_derived;
    derived_class_ptr -> var_derived = 98;
    derived_class_ptr -> display();

    // So which function is to be called for base_class_ptr and derived_class_ptr respectively this decision can be made by just seeing the program but the binding which is associating the address of the function to object this is done during run time which is called run time polymorphism

    return 0;
}