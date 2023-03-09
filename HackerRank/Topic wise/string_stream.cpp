#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

vector <int> parseInts(string s){
    vector <int> v;
    int n;
    stringstream ss(s);
    while(ss >> n){
        v.push_back(n);
        if (ss.peek() == ','){
            ss.ignore();
        }
    }    
    return v;
}
void display(vector <int> vec){
    for (auto i : vec)
    {
        cout<<i<<endl;
    }
    
}
int main() {
    string str;
    
    getline(cin, str);
    display(parseInts(str));
    
    return 0;
}
