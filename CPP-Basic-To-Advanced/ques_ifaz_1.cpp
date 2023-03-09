#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    float A[n], B[n];
    cout<<"Enter values of A: "<<endl;
    for (int i = 0; i < 3*n; i++)
    {   
        if(i>=0 && i<n){    
                cin>>A[i];
            }
        else if(i>=n && i<(2*n)){
            if(i==n){
                cout<<"Enter values of B: "<<endl;
            }
            cin>>B[i-n];
            A[i-n] = A[i-n] + B[i-n];
        }
        else{
            if(i==(2*n)){
                cout<<"Sum of the values are: "<<endl;
            }
            cout<<A[i-(2*n)]<<" ";
        }
    }
          

    
    return 0;
}