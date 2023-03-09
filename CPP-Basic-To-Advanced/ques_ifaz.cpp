#include<iostream>
#include "math.h"

using namespace std;

int calcfact(int n){
    int fact;
    if(n > 1){
        fact = n * calcfact(n-1);
        return fact;
    }
    return 1;
}
float sumS(int n){
    float sum=0;
    for (int i=1; i<=n; i++){
        sum += 5*pow(2, i-1) / calcfact(i);
    }
    return sum;
}


int main(){
    cout<<sumS(8)<<endl;
    return 0;
}