#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector <T> &v){
    cout<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
        // same as cout<<v.at(i)<<" ";
    }
    
    
}

int main(){
    int n=0;
    vector <int> vec;

    while(1){
        cin>>n;
        if(n!=42){
            vec.push_back(n);
        }
        else{
            break;
        }
    }
    display(vec);
        
            
    
    return 0;
}