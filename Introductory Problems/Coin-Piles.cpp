#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t; cin >> t;
    while(t--){
        ll a, b; cin >> a >> b;

        if((a+b)%3==0 and min(a,b)*2 >= max(a,b)) cout << "YES\n";
        else cout << "NO\n";
    }
}
