#include<iostream>
using namespace std;

int main(){
    int n=0, k=0;
    
    cin>>n>>k;
    
    int* score = new int[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>*(score+i);
    }
    for (int i = n-1; i >=0; i--)
    {
        if(*(score+k-1)==*(score+i) && *(score+k-1) > 0){
            cout<<i+1;
            return 0;
        }
        else if(*(score+k-1)==0 && *(score+i) > 0){
            cout<<i+1;
            return 0;
        }
        else if(*(score+i) > *(score+k-1)){
            cout<<i+1;
            return 0;
        }

    }
    cout<<0;
    
    
    return 0;
}