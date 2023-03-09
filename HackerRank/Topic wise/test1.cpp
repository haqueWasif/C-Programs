#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <string> vec;
    string temp;
    getline(cin, temp);
    temp.erase(remove(temp.begin(), temp.end(), '\"'), temp.end());
    temp.erase(remove(temp.begin(), temp.end(), '>' ),temp.end());
    stringstream ss;
    ss.str("");
    ss<<temp;
    string t1,p1,v1;
    char ch;
    ss>>ch>>t1>>p1>>ch>>v1;
    cout<<v1;
    cout<<vec.size();
    cout << ss;
    return 0;
}