#include<iostream>
using namespace std;

int main(){
    int a, b;
    try{
        cin >> a >> b;
        int n;
        if(b == 0){
            throw "Division by 0!";
        }
        cout << a/(b*1.0);
    }catch(const char* msg){
        cout << msg << endl;
    }
    
    return 0;

}

 