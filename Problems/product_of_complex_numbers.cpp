#include<iostream>

using namespace std;

class complex{
    int a, b;
    public:
        void getNum(int v1, int v2){
            a = v1;
            b = v2;
        }
        
        void setNumByProduct(complex o1, complex o2);
        
        void printNum(){
            cout<<a<<"+"<<b<<"i"<<endl;
        }
};
void complex :: setNumByProduct(complex o1, complex o2)
{
    a = ((o1.a*o2.a)-(o1.b*o2.b));
    b = ((o1.a*o2.b)+(o1.b*o2.a));
}
int main(){
    complex c1, c2, c;
    
    c1.getNum(1, 2);
    c1.printNum();

    c2.getNum(3, 4);
    c2.printNum();

    c.setNumByProduct(c1, c2);
    c.printNum();

    return 0;
}