#include<iostream>
using namespace std;

int fact(int n){
    if (n==0){
        return 1;
    }
    return n*fact(n-1);
}
int fib(int n){
    if(n<2){
        return 1; 
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int x;
    cout<<"Enter any number: ";
    cin>>x;
    // cout<<fact(x)<<endl;
    cout<<"The term in fibonacci sequence at position "<<x<<" is "<<fib(x);
    return 0;
}