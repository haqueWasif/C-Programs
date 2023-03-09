#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }
        friend Complex sumComplex(Complex o1, Complex o2);
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex o1, Complex o2){  // a function which returns complex data type
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
// Compiler is like a police it does not let other functions to get access to the private data of any class
// So in order for it to access the private data it need permission from the class which is done by friend function
// But it does not means that it became the member of the class it just have some access to the private data now
int main(){
    Complex c1, c2, sum;
    c1.setNumber(1, 4);  
    c2.setNumber(5, 8);
    c1.printNumber();
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}
/* Properties of friend functions 
1. Not in the scope of class
2. Since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() -> invalid
3. Can be invoked without the help of any object
4. Usually contains the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.
*/
