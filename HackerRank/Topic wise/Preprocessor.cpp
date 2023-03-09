#define foreach(v, i) for(int i = 0; i < n; i++)
#define io(v) cin >> v
#define INF 10e8
#define FUNCTION(name, sym) void name(int& a, int& b) {(a) sym (b) ? (a=a) : (a=b);}
#define toStr(x) #x 
 
#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}