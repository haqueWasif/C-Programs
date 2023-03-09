#include<iostream>
#include "math.h"

using namespace std;

class Point{
    int x, y;
    friend float distPoint(Point, Point);
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }
        void displayPoint(){
            cout<<"The point is ("<<x<<","<<y<<")"<<endl;
        }
};

float distPoint(Point p1, Point p2){
    float d = sqrt(pow((p1.x-p2.x),2) + pow((p1.y-p2.y),2));
    return d;
}

int main(){
    Point p(1,1);
    p.displayPoint();

    Point q(4,6);
    q.displayPoint();

    cout<<"Distance between the points is "<<distPoint(p,q)<<endl;

    
    return 0;
}