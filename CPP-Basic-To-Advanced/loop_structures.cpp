#include<iostream>

using namespace std;

int main(){
    /***** Loops in C++ *****/
    /* There are 3 types of loops in C++: 
        1. For loop
        2. While loop
        3. do-While loop
    */

   /* For loop in C++ */ 
   for (int i=1; i<=10; i++)
   { 
    cout<<i<<" ";
   }  
   cout<<"\n";

   /* While loop in C++ */ 
   int j = 1;
   while (j<=10){ 
    cout<<j<<" ";
    j++;
   }
   cout<<"\n";
   
   /* do While loop in C++ */ 
   int k = 1;
   do{ 
    cout<<k<<" ";
    k++;
  }while(k<=10);    
}
