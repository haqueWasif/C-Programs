#include<iostream>
using namespace std;

/***** Without typedef *****/

// struct employee
// {
//     /* data */
//     int eId;
//     char favChar;
//     float salary;
// };

// int main(){
//     struct employee harry;
//     struct employee shubham;
//     struct employee rohan;
//     harry.eId = 1;
//     harry.favChar = 'c';
//     harry.salary = 120000000;
//     cout<<"The value is "<<harry.eId<<endl;
//     cout<<"The value is "<<harry.favChar<<endl;
//     cout<<"The value is "<<harry.salary<<endl;
//     return 0;
// }

/**** With typedef ****/

// typedef struct employee
// {
//     /* data */
//     int eId;
//     char favChar;
//     float salary;
// } ep;

// int main(){
//     ep harry;
//     struct employee shubham;
//     struct employee rohan;
//     harry.eId = 1;
//     harry.favChar = 'c';
//     harry.salary = 120000000;
//     cout<<"The value is "<<harry.eId<<endl;
//     cout<<"The value is "<<harry.favChar<<endl;
//     cout<<"The value is "<<harry.salary<<endl;
//     return 0;
// }

/**** union ****/
 
// union in c++ is used for better memory management 
// memory is shared among the variables so only one variable can have value assigned  

// union money {
//     /* data */
//     int rice;
//     char car;
//     float pounds;
// };

// int main(){
//     union money m1;
//     m1.rice = 34;
//     m1.car = 'c'; 
//     cout<<m1.rice<<endl; // ascii value of c is printed
//     cout<<m1.car<<endl;
//     return 0;
// }

/*** enum ***/

// using enum program becomes more readable
// Meal here is now a data type

int main(){
    enum Meal{breakfast, lunch, dinner}; 
    Meal m1 = breakfast;
    cout<<m1<<endl;
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;
    
    return 0;
}