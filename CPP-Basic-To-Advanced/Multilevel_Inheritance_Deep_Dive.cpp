#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        void setRollNumber(int);
        void getRollNumber(void);
};
void Student :: setRollNumber(int r){
    roll_number = r;
}
void Student :: getRollNumber(void){
    cout<<"The roll number is "<<roll_number<<endl;
}
class Exam : public Student {
    protected:
        float maths;
        float physics;
    public:
        void setMarks(float, float);
        void getMarks(void);
};

void Exam :: setMarks(float m1, float m2){
    maths = m1;
    physics = m2;
}

void Exam :: getMarks(void){
    cout<<"The marks obtained in physics is "<<physics<<endl;
    cout<<"The marks obtained in maths is "<<maths<<endl;
}
class Result : public Exam{
    float percentage;
    public:
        void getPercentage(void){
            percentage = (maths+physics)/2;
        }
        void display(){
            getRollNumber();
            getMarks();
            getPercentage();
            cout<<"Your percentage is "<<percentage<<endl;
        }
};
int main(){
    /*
    Notes:
        If we are inheriting B from A and C from B: [ A-->B-->C ] 
        1. A is the base class for B and B is the base class for C
        2. A-->B-->C is called Inheritance Path
    */
    Result harry;
    harry.setRollNumber(12);
    harry.setMarks(99.9, 100);
    harry.display();
    return 0;
}