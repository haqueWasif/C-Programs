#include<iostream>
using namespace std;

//  If B and C are derived from A and D is derived from both B and C then if there is any variable say x which is in A. Then B and C also have x but since D is derived from both B and C so x is inherited twice so to solve this ambiguity and dublication we use virtual base class   
// syntax:
// class B : virtual public A{};
// class C : virtual public A{};
// class D : public B, public C {};

class Student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a; 
        }
        void print_number(void){
            cout<<"Your roll no is "<< roll_no<<endl;
        }
};

class Test : virtual public Student{ // virtual public <--> public virtual
    protected:
        float maths, physics;
        public:
            void set_marks(float m1, float m2){
                maths = m1;
                physics = m2;
            }
            void print_marks(void){
                cout << "Your result is here: "<<endl
                     << "Maths: " << maths<<endl
                     << "Physics: " << physics<<endl;
            }
};

class Practical : public virtual Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }
        void print_score(void){
            cout<<"Your practical score is "<<score<<endl;
        }

};

class Result : public Test, public Practical{
    private:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is : "<< total<< endl;
        }
};

int main(){
    Result rocky;
    rocky.set_number(57);
    rocky.set_marks(89, 98);
    rocky.set_score(100);
    rocky.display();
    


    return 0;
}