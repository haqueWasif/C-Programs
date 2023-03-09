#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // Connecting our file to wout stream
    ofstream wout("Sample_File1.txt");

    // Creating a name string and filling it with the string entered by the user
    cout<<"Enter your name: ";
    string name;
    getline(cin, name);

    // Writing a string to the file
    wout<<"My name is " + name;
    wout.close();
    
    ifstream win("Sample_File1.txt");
    string content;
    getline(win, content); // Reads a line from the file and stores it in the content variable
    cout<<"The content of this file is: "<<content;
    win.close();
    

    return 0;
}