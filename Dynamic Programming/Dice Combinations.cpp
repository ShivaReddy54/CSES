#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    int n, mod = 1e9+7;
	cin >> n;
	ll a=0,b=0,c=0,d=0,e=0,f=1;
	
	for(int i=1; i<=n; i++){
	    int tmp= ( (a+b+c+d+e+f) ) % mod;
	    a=b;
	    b=c;
	    c=d;
	    d=e;
	    e=f;
	    f= ( tmp ) % mod;
	}
	
	cout << f;

}
