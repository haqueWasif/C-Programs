#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set <int> s;
    
    int q;
    cin >> q;
    
    short y;
    int  x;
    do{
        cin >> y >> x;
        switch (y) {
            case 1:
              s.insert(x);
              break;  
            case 2:
              s.erase(x);
              break;
            case 3:
              auto itr = s.find(x);
              if(itr != s.end()){
                  cout<<"Yes"<<endl;
              }
              else{
                  cout<<"No"<<endl;
              }
        }
        
    }while(--q);  
    return 0;
}



