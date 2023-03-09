#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*  Given 2 queries where 1st one is a position in the vector the value at which is to be removed and the 2nd one denotes a range of the positions . 2nd one is performed on the updated vector after performing 1st query */
int main() {
    vector <int> v;
    
    int n;
    cin >> n;
    
    int i;
    do{
        cin >> i;
        v.push_back(i);
        
    }while(--n);
    
    int x;
    cin >> x;
    v.erase(v.begin() + (x - 1));
   
    int a, b;
    cin >> a >> b;
    v.erase(v.begin() + (a-1), v.begin() + (b-1));
    
    cout << v.size() << endl;
    for (auto itm : v){
        cout << itm << " ";
    }
    
    return 0;
}
