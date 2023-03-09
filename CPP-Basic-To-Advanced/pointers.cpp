#include<iostream>
using namespace std;

int main(){
    // What is a pointer? ----> data type which holds the address of other data types

    int a=3;
    int* b = &a; // or int *b = &a
    // & --> (Address of) operator

    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * --> (value at) Deference operator

    cout<<"The value at address in b is "<<*b<<endl;
    
    // pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address in c is "<<*c<<endl;
    cout<<"The value at (value at address in c) is "<<**c<<endl;

    return 0;
}