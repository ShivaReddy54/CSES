#include <bits/stdc++.h>
using namespace std;
#define ll long long

int md = 1e9+7;
int eu_md = md - 1;

ll power(ll a, ll b, int mod){
    if(b == 0) return 1;

    ll half = power(a, b/2, mod);
    half = ((half)%mod * (half)%mod) % mod;

    if(b & 1) half = (half * a)%mod;
    return half;
}

int main(){
    int n; cin >> n;
    ll a, b, c;
    while(n--){
        cin >> a >> b >> c;

        ll h = power(b, c, eu_md);
        ll ans = power(a, h, md);
        cout << ans << endl;
    }
}