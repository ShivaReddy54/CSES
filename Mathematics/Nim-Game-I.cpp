#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        ll xo =0 ;
        for(auto i : v) xo ^= i;

        if(xo) cout <<  "first\n";
        else cout << "second\n";
    }
}