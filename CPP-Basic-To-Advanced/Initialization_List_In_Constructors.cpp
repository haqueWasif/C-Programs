#include<iostream>
using namespace std;

/*

Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}

*/

/* 

class Test{
    int a;
    int b;
    public:
       Test(int i, int j) : a(i), b(j)
       {
            constructor-body
       }
};

*/

class Test{
    int a;
    int b; 
    // variable which is declared first is also intialized first
    public:
       // Test(int i, int j) : a(i), b(j)
       // Test(int i, int j) : a(i), b(i+j)
       // Test(int i, int j) : a(i), b(2*j)
       // Test(int i, int j) : a(i), b(a+j)
       Test(int i, int j) : b(j), a(i+b) // since a is declared before b so changing the order here will not cause the initializing order to change
       {
            cout<<"Constructor execued"<<endl;
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
       }
};

int main(){
    Test t(2,4); 

    return 0;
}