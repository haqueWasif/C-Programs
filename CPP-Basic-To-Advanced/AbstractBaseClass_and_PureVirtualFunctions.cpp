#include<iostream>
#include<cstring>

using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display()=0; // do-nothing --> pure virtual function
        // It means if a derived class is formed from a base class with a pure virtual function then the derived class must have that function with same or different definition that is this pure virtual function must be overwritten in the derived class
        // Pure virtual functions are used to form an abstract base class which is a class that's sole purpose is to produce derived class
        // Abstract Base Class -> A class which must have at least one pure virtual function
};

class CWHVideo : public CWH{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vL) : CWH(s, r){
            videoLength = vL;
        }
    void display(){
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
        cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
    }
};

class CWHText : public CWH{
    int words;
    public:
        CWHText(string s, float r, int wC) : CWH(s, r){
            words = wC;
        }
        void display(){
            cout<<"This is an amazing test tutorial with title "<<title<<endl;
            cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
            cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
        }
};
int main(){
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);
    //djText.display();

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;
    
    tuts[0] -> display();
    tuts[1] -> display();


    return 0;
}

// Rule for virtual functions
// 1. They cannot be static
// 2. They are accesses by objects pointers 
// 3. Virtual functions can be a friend of another class
// 4. A virtual function in base class might not be used
// 5. If a virtual function is defined in the base class, there is no necessity of redefining it (non-virtual) in the derived class