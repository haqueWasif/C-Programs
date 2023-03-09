#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    protected:
        string name;
        int age;
    public:
        virtual void getdata() {}
        virtual void putdata() {}
};

class Professor : public Person{
    private:
        int publications;
        static int cur_id;
    public:
        void getdata(){
            cin >> name >> age >> publications; 
        }
        void putdata(){
            cur_id++;
            cout << name << " " << age << " " << publications << " " << cur_id << endl;
        }
};

int Professor :: cur_id;

class Student : public Person{
    protected:
        int marks[6];
        static int cur_id;
    public:
        void getdata(){
            cin >> name >> age >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4] >> marks[5];      
        }
        void putdata(){
            cur_id++;
            cout << name << " " << age << " " << marks[0] + marks[1] + marks[2] + marks[3] + marks[4] + marks[5] << " " << cur_id << endl;
        }
        
};

int Student :: cur_id;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
