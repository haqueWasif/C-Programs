#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    cin.ignore();
    string str;
    for (int i = 0; i < T; i++)
    {
        getline(cin,str);
        int l = str.size();
        for (int j = 0; j < l; j++)
        {
            if(str[j] >= 'A' && str[j] <= 'z'){
                str[j] = str[j] + 3;
            }
            if(l % 2 == 0 && j < (l / 2)){
                str[j] = str[j] - 1;
            }
            if(l % 2 == 1 && j < (l+1) / 2){
                str[j] = str[j] - 1;
            }
        }
        reverse(str.begin(), str.end());
        cout << str << endl;
    }
    
    return 0;
}