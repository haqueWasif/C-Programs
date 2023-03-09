#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cout<< "Enter the value of num1: \n"; /* << is called insertion( gives the output to the screen ) operator */
    cin>> num1; /* >> is called extraction( extract the input given by user ) operator */
    cout<< "Enter the value of num2: \n";
    cin>> num2;

    cout<< "The sum is " << num1+num2; 
    return 0;
}

/* 
   cout<< "String"  [shows the string to the screen]
   cin>> var [takes an input from the user and stores it into var] 
*/