#include<iostream>

using namespace std;

int main(){
    // Array Example 
    int marks[] = {23, 45, 56, 89};

    int mathMarks[4];
    mathMarks[0] = 78;
    mathMarks[1] = 87;
    mathMarks[2] = 95;
    mathMarks[3] = 56;
    
    cout<<"These are math marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    marks[2] = 455; // You can change the value of an array
    cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;

    }
    
    // Pointers and arrays
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;
    // cout<<"The value of marks[0] is "<<*p<<endl;
    // cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    // cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    // cout<<"The value of marks[3] is "<<*(p+3)<<endl;

    return 0;
}