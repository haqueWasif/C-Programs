#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
   int t;
   long int sum=0;
    cin >> t;
    
    do{
        long n, n3, n5, n15;
        scanf("%ld", &n);
        n3 = (n - ((n-1) % 3)) / 3;
        n5 = (n - ((n-1) % 5)) / 5;
        n15 = (n - ((n-1) % 15)) / 15;
        sum = 3*n3*(n3+1)/2 +  5*n5*(n5+1)/2 - 15*n15*(n15+1)/2;
        printf("%ld\n", sum);
        sum = 0;
    }while(--t);
    
    return 0;
}
