#include <bits/stdc++.h>

using namespace std;

int main() {
   int n, q;
   string tmp;
   vector <string> hrml, quar;
   
   cin>>n>>q;
   cin.ignore();
   
   do{
    getline(cin, tmp);
    hrml.push_back(tmp);
   }while(--n);
  
   do{
    getline(cin, tmp);
    quar.push_back(tmp);
   }while(--q);
   
   vector <string> tag;
   map <string, string> m;
    
   for (auto i : hrml)
   {   
        tmp = i;
        tmp.erase(remove(tmp.begin(), tmp.end(), '\"'), tmp.end());
        tmp.erase(remove(tmp.begin(), tmp.end(), '<'), tmp.end());
        tmp.erase(remove(tmp.begin(), tmp.end(), '>'), tmp.end());
        
        if(tmp.find("/")==0){
            tag.pop_back();
        }
        else{
            string t, n, v;
            char ch;
            
            stringstream ss;
            ss.str("");
            
            ss<<tmp;
            ss>>t>>n>>ch>>v;
            
            if(tag.size()>0){
                t = *tag.rbegin() + "." + t;
            }
            
            tag.push_back(t);
            m[t + "~" + n] = v;
            
            while(ss){
                ss>>n>>ch>>v;
                m[t + "~" + n] = v;
            }
        }
    }
    for (auto i : quar)
    {
        if(m.find(i) == m.end()){
            cout<<"Not Found!"<<endl;
        }
        else{
            cout<<m[i]<<endl;
        }
    }
   
    
    return 0;
}
