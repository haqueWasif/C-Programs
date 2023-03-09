#include<iostream>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int* arr = new int[n];
    for (int i=0; i<n; i++){
        arr[i] = i;
        printf("%d", arr[i]);
    }
    delete(arr);
    cout<<"Ok";
    return 0;
}