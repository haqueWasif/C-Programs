#include<iostream>
#include<string>

using namespace std;

class Human
{
    private:
        string name, education, occupation;
        int age;
    public:
        string nickName, quality;
        void setData(string n, string edu, string occ, int a);
        void getData(){
            cout<<"Name: "<<name<<endl;
            cout<<"Education: "<<education<<endl;
            cout<<"Occupation: "<<occupation<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Nick name: "<<nickName<<endl;
            cout<<"Quality: "<<quality<<endl;
        }
};

void Human :: setData(string n, string edu, string occ, int a){
    name = n;
    education = edu;
    occupation = occ;
    age = a;
}   

int main(){
    Human rakib;
    rakib.nickName = "rocky";
    rakib.quality = "Hard working";
    rakib.setData("Rakib", "DU", "SWE", 27);
    rakib.getData();

    return 0;
}