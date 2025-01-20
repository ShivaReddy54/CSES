#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main(){
    int n; cin >> n;
    ll x; cin >> x;
    vector<pair<ll, ll>> v(n); ll a;
    for(int i=0; i<n; i++){
        cin >> a;
        v[i] = {a, i};
    }
    sort(v.begin(), v.end());

    vector<ll> ans(3, -1);
    for(int i=0; i<n-2; i++){
        int l=i+1, r = n-1;
        while(l < r){
            ll sum = v[i].first + v[l].first + v[r].first;
            if(sum == x){
                ans[0] = v[i].second+1; ans[1] = v[l].second+1; ans[2] = v[r].second+1;
                break;
            }
            if(sum > x) r--;
            else l++;
        }
    }

    if(ans[0] == -1) cout << "IMPOSSIBLE\n";
    else {
        sort(ans.begin(), ans.end());
        cout << ans[0] << " " << ans[1] << " " << ans[2];
    }
}