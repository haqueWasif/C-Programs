#include<iostream>
using namespace std;

class Test
{
int a;
public:
    Test(const Test &t){ // const is used so that there is no possibility of value return by fun() to change as it makes no sense for it to change since it is a temporary object 
        cout<<"Copy constructor called!!"<<endl;
        a = t.a;
    } 
    Test(){ /* Initialize data members */ 
        a = 0;
    }
    void display(){
        cout<<"Value of a is "<<a<<endl;
    }	 
};

Test fun()
{
	cout << "fun() Called\n";
	Test t;
	return t; // Compiler returns a temporary object which cannot be passed as an argument to non constant references 
}

int main()
{
	Test t1;
    t1 = fun();
    t1.display();
	Test t2 = fun(); // Copy constructor is not called 
   //But  Test t2 = t1 then Copy constructor is called
	return 0;
}