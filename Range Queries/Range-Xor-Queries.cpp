#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define u64 unsigned long int

int main(){
    int n, q; cin >> n >> q;
    vector<ll> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    for(int i=1; i<n; i++) v[i] = v[i-1] ^ v[i];

    int a, b;
    for(int i=0; i<q; i++){
        cin >> a >> b;
        a--; b--;
        a--;

        if(a < 0) cout << v[b];
        else cout << (v[a] ^ v[b]);
        cout << endl;
    }
}