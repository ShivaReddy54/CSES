#include <bits/stdc++.h>
using namespace std;
#define ll long long

void balance(multiset<ll>& left, multiset<ll>& right){
    if(left.size() > right.size()+1){
        right.insert(*left.rbegin());
        left.erase(prev(left.end()));
    }

    if(right.size() > left.size()){
        left.insert(*right.begin());
        right.erase(right.begin());
    }
}

int main(){
    int n, k; cin >> n >> k;
    vector<ll> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    vector<ll> ans;
    multiset<ll> left, right;

    for(int i=0; i<n; i++){
        // insert
        if(left.empty() or v[i] <= *left.rbegin()) left.insert(v[i]);
        else right.insert(v[i]);
        balance(left, right);

        // delete
        if(i >= k){
            ll val = v[i-k];
            if(left.find(val) != left.end()) left.erase(left.find(val));
            else if(right.find(val) != right.end()) right.erase(right.find(val));
            balance(left, right);
        }

        // median
        if(i >= k-1){
            if(k & 1) ans.push_back(*left.rbegin());
            else {
                ll med = min(*left.rbegin() , *right.begin());
                ans.push_back(med);
                balance(left, right);
            }
        }
    }

    for(auto i : ans) cout << i << " ";

}
