#include<iostream>

using namespace std;

int c = 45;

int main(){
    //  ********** Build in data types *********  //
    // int a, b, c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The global c is "<<::c; // :: scope resolution operator is used since we want the value of the global variable

    //  ********** float, double and long double literals *********  //
/*  float d=34.4;
    long double e = 34.4;
    // by default decimal numbers are considered double in c++
    // if we want to specify it as a floating point number instead of double then we need to use f at end also f can be either small f or capital F
    // so here 34.4 is a double so if we want to make if float then we write it like 34.4f 
*/  

/*    float d = 34.4f;
    long double e = 34.4;

    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl; 
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl; 
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"The value of d is "<<d<<"\nThe value of e is "<<e;
*/    
    
    //  ********** Reference Variables *********  //
    // Rohan ----> Monty ----> Rohu ----> Dangerous Coder
    float x = 455;
    float &y = x; // y is a reference variable which point towards x
    cout<<x<<endl;    
    cout<<y<<endl;    
    
    //  ********** Type Casting *********  //
    int a = 45;
    float b = 45.46;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;
    
    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b);
    int c = int(b);

    cout<<"\nThe expression is "<<a + b;
    cout<<"\nThe expression is "<<a + int(b);
    cout<<"\nThe expression is "<<a + (int)b;
    return 0;
}