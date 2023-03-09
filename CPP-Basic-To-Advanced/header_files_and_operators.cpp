// There are 2 types of header files
// 1. System header files: It comes with the compiler
#include<iostream>
// 2. User defined header files: It is written by the programmer
// #include"this.h" --> This will produce an error if this.h is not present in the current directory 

using namespace std;

int main(){
    int a=4, b=5;
    cout<<"Operators in C++:"<<endl; // endl is used if we want to go to new line
    cout<<"Following are the types of operators in C++:"<<endl;
    // Arithematic operators
    cout<<"The value of a + b is "<< a+b <<endl;
    cout<<"The value of a - b is "<< a-b <<endl;
    cout<<"The value of a * b is "<< a*b <<endl;
    cout<<"The value of a / b is "<< a/b <<endl; 
    cout<<"The value of a % b is "<< a%b <<endl; 
    cout<<"The value of a ++ is  "<< a++ <<endl; 
    cout<<"The value of a -- is  "<< a-- <<endl;     
    cout<<"The value of ++a  is  "<< ++a <<endl;     
    cout<<"The value of --a  is  "<< --a <<endl;  

    // Assignment Operators
    //int a=3, b=9;
    //char d = 'd';

    // Comparison Operators
    cout<<"\nFollowing are the comparison operators in C++"<<endl;
    cout<<"The value of a == b is "<<  (a==b) <<endl;
    cout<<"The value of a < b  is "<<  (a<b) <<endl;
    cout<<"The value of a > b  is "<<  (a>b) <<endl;
    cout<<"The value of a <= b is "<<  (a<=b)  <<endl;
    cout<<"The value of a >= b is "<<  (a>=b)  <<endl;
    cout<<"The value of a != b is "<<  (a!=b)  <<endl;

    // Logical Operators
    cout<<"\nFollowing are the logical operators in C++"<<endl;
    cout<<"The value of this logical and operator ((a == b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;    
    cout<<"The value of this logical or operator ((a == b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;     
    cout<<"The value of this logical not operator (!(a == b) is: "<<!((a==b))<<endl;     
    return 0;
}