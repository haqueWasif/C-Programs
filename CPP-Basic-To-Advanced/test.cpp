#include<iostream>
using namespace std;

int main(){
    int* count = new int[3];
    *(count)++;
    cout<<*(count);
    return 0;
}