#include<iostream>
using namespace std;

template <class T>
class Barry{
    public:
        T data;
        Barry(T a) : data(a){};
        void display();
};

template <class T>
void Barry <T> :: display(){
            cout<<data;
        }

void func(int a){
    cout<<"I am first func() "<<a<<endl;

}

template <class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;

}
int main(){
    // Barry <float> b(5.7);
    // b.display();

    func(2); // Exact match takes the highest priority
    func <int> (2);
    return 0;
}