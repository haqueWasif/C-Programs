#include<iostream>
using namespace std;

int main(){
    int* arr = new int[3];
    int n, count=0, temp=0;
    cin>>n;
    while(n--){
        cin>>*(arr+0)>>*(arr+1)>>*(arr+2);
        for (int i = 0; i < 3; i++)
        {
            if(*(arr+i)==1){
                temp++;
                if(temp==2){
                    temp--;
                    count += temp;
                    temp = 0;
                    break;
                }
            }
            if(i==2){
                if(temp==0){
                }
                else{
                    temp--;
                }
            }
            
        }
        
    }
    cout<<count;
    
    return 0;
}