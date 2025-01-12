#include <bits/stdc++.h>
using namespace std;
#define ll long long

int mod = 1e9+7;
ll power(ll a, ll b){
    if(b == 0) return 1;

    ll half = power(a, b/2);
    half = ((half)%mod * (half)%mod) % mod;

    if(b & 1) half = (half * a)%mod;
    return half;
}

int main(){
    int n; cin >> n;
    ll a, b;
    while(n--){
        cin >> a >> b;
        cout << power(a, b) << endl;
    }
}