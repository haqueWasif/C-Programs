#include<iostream>
#include<string>

using namespace std;

int main(){
    int t, i;
    string str;

    cin>>t;
    
    while(t--){
        cin>>str;
        if(str.size() > 10){
            str.replace(1,(str.size()-2), to_string(str.size()-2));
            cout<<str<<endl;
        }
        else{
            cout<<str<<endl;
        }
    }
    
        
    
    return 0;
}