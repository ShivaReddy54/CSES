#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int mod = 1e9+7;
    int n; cin >> n;

    ll ans = 1;
    for(int i=1; i<=n; i++)
        ans = ((ans * 2) % mod) % mod;
    cout << ans;
}