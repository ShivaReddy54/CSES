#include <bits/stdc++.h>
using namespace std;
using u64 = unsigned long int;
 
int main(){
    u64 n, k;
    cin >> n >> k;
    vector<u64> v(n);
    u64 l = 0, r = 0;
    for(int i=0; i<n; i++) {
        cin >> v[i];
        l = max(l, v[i]);
        r += v[i];
    }
 
    u64 ans = 0, mid;
 
    while (l <= r){
        mid = l + (r - l) / 2;
 
        u64 cnt = 1, sum = 0;
        for(int i=0; i<n; i++){
            if(sum + v[i] <= mid) sum += v[i];
            else {
                cnt++;
                sum = v[i];
            }
        }
 
        if(cnt > k) l = mid + 1;
        else {
            ans = mid;
            r = mid - 1;
        }
    }
 
    cout << ans;
}