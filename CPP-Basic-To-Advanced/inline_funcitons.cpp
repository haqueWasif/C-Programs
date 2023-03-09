#include<iostream>
using namespace std;

// using inline here replaces the function call with the function code during compile time but it is useful if the function is small
// in case of large functions using inline function causes less space in cache memory and so memory is consumed more 
// also better not use inline functions in case of recursion, static variables, loops and switch
inline int product(int a, int b){ 
    // creating an inline function is requesting to the compiler to make it inline so it can accept or reject
    return a*b;
}

// int product(int a, int b){   // Not a good practice to use inline with static 
//     static int c=0; // Initializes value of c at first to 0 when the value of c is changed to 1 then again when we call the function then this statement no longer runs so then value of c is changed to 2  
//     c = c + 1;
//     return a*b+c;
// }

float moneyReceived(int currentMoney, float factor=1.04){ 
    // all the default arguments have to be at the right whereas the compulsary ones at left
    return currentMoney * factor;
}

// int strlen(const char *p){ 
    // we only want the length of the string and we dont want the compiler to change the string i.e p here so we use const
    // and this is mostly valid for reference variables and pointers
// }
int main(){
    // int a, b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;

    int money = 100000;
    cout<<"If you have "<<money<<" Tk in your bank account, you will receive "<<moneyReceived(money)<< " Tk after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Tk in your bank account, you will receive "<<moneyReceived(money, 1.1)<<" Tk after 1 year";
    return 0;
}