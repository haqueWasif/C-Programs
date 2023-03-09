#include<iostream>
using namespace std;

// Destructors never take an argument nor it returns a value
int count = 0; // We can also make count a static varible instead of global variable

class num{
    public:
        num(){
            count++;
            cout<<"This is the time when constructor is called for object number "<<count<<endl;

        }
        ~num(){
            cout<<"This is the time when my destructor is called for object number "<<count<<endl;
            count--;
        }
};

int main(){
    cout<<"We are inside out main function"<<endl;
    cout<<"Creating our first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating our second object n2"<<endl;
        num n2, n3; // These objects are destroyed after exiting the block
        cout<<"Exting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}