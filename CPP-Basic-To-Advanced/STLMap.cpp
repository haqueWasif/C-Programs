#include<iostream>
#include<map>
#include<string>
using namespace std;

// Map is an associative array
int main(){
    map <string, int> marksMap;
    marksMap["Bobby"] = 98;
    marksMap["Ron"] = 44;
    marksMap["Jack"] = 2;
    
    marksMap.insert({{"Kozume", 169}, {"Kuroo", 187}});
    map <string, int> :: iterator itr;
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<"\n";
    }
    cout<< "The size is: "<<marksMap.size()<<endl;
    cout<< "The max size is: "<<marksMap.max_size()<<endl;
    cout<< "The empty's retun value is: "<<marksMap.empty()<<endl;
    return 0;
}