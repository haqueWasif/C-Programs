#include<iostream>
using namespace std;

class Base{
    protected: // protected also refers to a private variable but it is inheritable
        int a;
    private: // it is not inheritable
        int b;

};
/*
For a protected member:
                    Public derivation     Private derivation     Protected derivation
1. Private            not inherited         not inherited          not inherited
2. Protected          protected             private                 protected
3. Public             public                private                 protected
*/
class Derived : protected Base{

};
int main(){
    Base b;
    Derived d;
    // cout<<b.a<<endl; // Will not work since a is protected in both base as well as derived class
    return 0;
}