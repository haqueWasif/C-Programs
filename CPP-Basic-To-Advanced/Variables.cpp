#include<iostream> 
using namespace std;

int a = 3, b = 5; // Global variables 
void var(){
    cout<< a << " " << b;
}
int main() {
    int a = 1, b = 2; // Local variables
    bool is_true = true;
    var();
    cout<< "\nHello World! \n"<<"Here the value of a is " << a << ". The value of b is "<< b;
    cout<< "\nvalue is " << is_true;  
    return 0;
}