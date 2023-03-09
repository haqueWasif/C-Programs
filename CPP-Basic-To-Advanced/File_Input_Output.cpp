#include<iostream>
#include<fstream>

/* The useful classes for working with files in C++ are:
1. fstreambase 
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

// In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
// 1. Using the constructor
// 2. Using the member function open() of the class

using namespace std;

// File -> A pattern of data which is stored in disk

// Input(In to the program) stream in file is reading the file
// Output(Out from the program) stream in file is writing to the file

int main(){
    string st1 = "Hello World!";
    string st2;

    // Opening files using constructor and writing it
    ofstream out("Sample_File1.txt"); // Write operation
    out<<st1;

    // Opening files using constructor and reading it
    ifstream in("Sample_File2.txt"); // Read operation
    //in>>st2;
    getline(in, st2);
    cout<<st2<<endl;
    getline(in, st2);
    cout<<st2<<endl;
    
    return 0;
}