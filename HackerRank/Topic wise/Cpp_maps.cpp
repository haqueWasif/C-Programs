#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>

using namespace std;


int main() {
    map <string, int> m;
    string x;
    short int y;
    
    int q;
    cin >> q;

    short int type;
    while(q--){
        cin >> type >> x;
        switch(type){
            case 1:
                cin >> y;
                m[x] += y;
                break;
            case 2:
                m.erase(x);
                break;
            case 3:
                auto itr = m.find(x);
                if(itr != m.end()){
                    cout << m[x] << endl;
                }
                else{
                    cout << "0" << endl;
                }
                break;   
            }
        }
    
return 0;

}

