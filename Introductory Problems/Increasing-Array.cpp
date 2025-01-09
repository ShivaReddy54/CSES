#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define u64 unsigned long int

int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    int ans = 0;
    for(int i=1; i<n; i++) {
        if (v[i] < v[i - 1]) {
            ans += abs(v[i] - v[i - 1]);
            v[i] = v[i-1];
        }
    }
    cout << ans;
}