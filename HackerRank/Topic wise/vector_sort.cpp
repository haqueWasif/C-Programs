#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, x;
    vector <int> v;
    
    cin >> n;

    do{
        cin >> x;
        v.push_back(x);
        
    }while(--n);
    
    sort(v.begin(), v.end());
    
    for (auto i : v){
        cout << i << ' ';
    }
    return 0;
}
