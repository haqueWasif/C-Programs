#include<iostream>
#include<iomanip>
using namespace std;

int main(){
/*  int a = 34;
    cout<<"The value of a was: "<<a<<endl;
    a = 45;
    cout<<"The value of a is: "<<a;
*/    
    /****** Constants in C++ *******/
    // const int a = 34;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45; // You will get an error because a is a constant
    // cout<<"The value of a is: "<<a<<endl;

    /***** Manipulators in C++ *****/

/*  int a=3, b=78, c=1233;
    cout<<"The value of a without setw is: "<<a<<endl; 
    cout<<"The value of b without setw is: "<<b<<endl; 
    cout<<"The value of c without setw is: "<<c<<endl; 

    // setw(4) sets width of anything that comes after it to 4 whose width is less than the width specified which is 4 here  
    cout<<"The value of a is: "<<setw(4)<<a<<endl; 
    cout<<"The value of b is: "<<setw(4)<<b<<endl; 
    cout<<"The value of c is: "<<setw(4)<<c<<endl; 

*/
    /***** Operator Precedence *****/
    int a=3, b=4;
    // int c = (a*5)+b;
    int c = ((((a*5)+b)-47)+87); // This precedence wise calculation is done during compile time here first the operation with higher precedence is done then for same precedence associativity is followed
    cout<<c;

    return 0;
}