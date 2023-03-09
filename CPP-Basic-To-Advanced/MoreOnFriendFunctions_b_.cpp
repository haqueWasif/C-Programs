#include<iostream>
using namespace std;

class c2;

class c1{
    int val1;
    public:
        void inData(int a){
            val1 = a;
        }
        void display(void){
            cout << val1 << endl;
        }
    friend void swapVal(c1 &, c2 &);
};

class c2{
    int val2;
    public:
        void inData(int a){
            val2 = a;
        }
        void display(void){
            cout << val2 << endl;
        }
    friend void swapVal(c1 &, c2 &);
};

void swapVal(c1 &o1, c2 &o2){
    int temp = o1.val1;
    o1.val1 = o2.val2;
    o2.val2 = temp;
}

int main(){
    c1 a;
    c2 b;
    a.inData(1);
    a.display();
    
    b.inData(2);
    b.display();

    swapVal(a, b);
    cout << "The value after exchanging is " << endl;
    a.display();
    b.display();
    
    return 0;
}