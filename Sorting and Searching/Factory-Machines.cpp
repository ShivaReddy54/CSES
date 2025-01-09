#include <bits/stdc++.h>
using namespace std;
using u64 = unsigned long int;
 
int main(){
    u64 n, t;
    cin >> n >> t;
    vector<u64> v(n);
    u64 l = 1, r = 0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        r = max(r, v[i]);
    }
    r = r * t;
    u64 ans = 0, mid;
 
    while(l <= r){
        mid = l + (r - l) / 2;
 
        u64 cnt = 0;
        for(auto i : v) cnt += mid / i;
 
        if(cnt >= t){
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
 
    cout << ans;
}