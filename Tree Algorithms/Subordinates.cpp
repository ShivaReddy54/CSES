#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define u64 unsigned long int

int dfs(int node, vector<int> adj[], int par, vector<int>& ans){
    int cnt = 0;
    for(auto i : adj[node]){
        if(i == par) continue;
        cnt += 1 + dfs(i, adj, node, ans);
    }

    ans[node] = cnt;
    return cnt;
}

int main(){
    int n; cin >> n;
    vector<int> adj[n+1];
    int a;
    for(int i=2; i<=n; i++){
        cin >> a;
        adj[i].push_back(a);
        adj[a].push_back(i);
    }

    vector<int> ans(n+1);
    dfs(1, adj, -1, ans);
    for(int i=1; i<=n; i++) cout << ans[i] << " ";
}