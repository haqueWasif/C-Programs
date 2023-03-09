#include<iostream>

using namespace std;


// This means what data type i want to use will be specified later
// Data type is given as a parameter to that class 
// So now instead of creating multiple class for different datatypes we can now use a single parametrized class 

template <class T> 
class Vector{
    public:
        T* arr;
        int size;
        Vector(int m){
            size = m;
            arr = new T[size];
        }
        T dotProduct(Vector &v){
            T d = 0;
            for (int i = 0; i < size; i++)
            {
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }

};

int main(){
    Vector <float> v1(3);
    v1.arr[0]=1.1;
    v1.arr[1]=1.2;
    v1.arr[2]=1.3;
    Vector <float> v2(3);
    v2.arr[0]=2.1;
    v2.arr[1]=2.2;
    v2.arr[2]=2.3;
    float a = v1.dotProduct(v2);
    cout<<a<<endl;

    return 0;
}