#include<iostream>
using namespace std;

class A{
    int a;
    public:
        void setData(int a){
            this->a = a; // This statement means set the value of a for the object to the value given as argument of setData()
        }
        /* A & setData(int a){
            this->a = a;
            return *this; 
        } */
        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};   
int main(){
    // 'this' is a keyword which is a pointer which points to the object which invokes the member function
    A a;
    a.setData(4);
    // a.setData(4).getData() // since setData with return type A returns an object we can use getData() directly 
    a.getData();
    return 0;
}