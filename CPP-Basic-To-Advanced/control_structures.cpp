#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"Tell me you age"<<endl;
    cin>>age;

    /***** 1. Selection Control Structure: if else-if else ladder ******/
    // if (age<18){
    //     cout<<"You are not eligible!";
    // }
    // else if (age==18){
    //     cout<<"You will be eligible next year!";
    // }       
    // else{
    //     cout<<"You are eligible";
    // }

    /***** 2. Selection Control Structure: switch case statements *****/
    switch (age)
    {
    case 18:
        cout<<"You will be eligible next year!";
        break;
    case 0:
        cout<<"You have just born";
        break;
    case 20:
        cout<<"You are eligible";
        break;
    }
    return 0;
}