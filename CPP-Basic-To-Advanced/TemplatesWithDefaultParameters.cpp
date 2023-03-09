#include<iostream>
using namespace std;

template <class T1=int, class T2=float, class T3=char>
class Barry{
    public:
        T1 a;
        T2 b;
        T3 c;
        Barry(T1 x, T2 y, T3 z) : a(x), b(y), c(z) {};
        void display(){
            cout<<"The value of a is "<<a<<endl; 
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }
};
int main(){
    Barry < > b(4, 3.4, 's');
    b.display();
    cout<<endl;
    Barry <float, char, char > g(1.4, 'b', 's');
    g.display();

    return 0;
}