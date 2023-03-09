#include<iostream>
using namespace std;

class Employee
{
    private:
        int a, b, c; 
    public:
        int d, e;
        void setData(int a1, int b1, int c1); // Declaration
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){ // setData can access the private variables as the function was defined in the class but using an object of that class the private variables cannot be accessed
    a = a1;
    b = b1;
    c = c1;
}
int main(){
    Employee harry;
    // harry.a = 134; --> This will give error since a is a private variable
    harry.d = 34;
    harry.e = 89;
    harry.setData(1,2,4);
    harry.getData();
    return 0;
}