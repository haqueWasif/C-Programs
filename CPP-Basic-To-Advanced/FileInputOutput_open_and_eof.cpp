#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    // ofstream out;
    // out.open("Sample_File2.txt");
    // out<<"This is me";
    // out.close();

    ifstream in;
    string st;
    in.open("Sample_File2.txt");
    // getline(in, st);
    // cout<<st;
    while(!(in.eof())){ 
    // or while(in.eof()==0)
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();
        
    return 0;
}