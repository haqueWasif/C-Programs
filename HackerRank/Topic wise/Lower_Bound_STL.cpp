#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* Given N integers in sorted order
   Also given Q queries where in each you will be given an integer and you have to tell whether that integer is present in the array.
   If so you have to tell at which index it is present and if it is not present, you have to tell the index at which the smallest integer that is just greater than the given number is present */
   
int main() {
    vector <int> v;
    
    int n;
    scanf("%d", &n);
    
    int x;
    do {
        scanf("%d", &x);
        v.push_back(x);
    }while (--n);       
    
    scanf("%d", &n);
    
    vector <int> :: iterator low;
    do {
        scanf("%d", &x);
        low = lower_bound(v.begin(), v.end(), x);
        if(v[low-v.begin()] == x){
             printf("Yes %d\n", int((low - v.begin()) + 1));
        }
        else{
            printf("No %d\n", int((low - v.begin()) + 1));
        }
    }while (--n);

    return 0;
}
