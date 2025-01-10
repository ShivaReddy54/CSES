#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define u64 unsigned long int

#define pr pair<int, int>
pr dfs(int node, vector<int> adj[], int par){
    pr t = {0, node}; // dist + node

    for(auto i : adj[node]){
        if(i == par) continue;

        pr curr = dfs(i, adj, node);
        curr.first++;

        if(curr.first > t.first) t = curr;
    }
    return t;
}

int main(){
    int n; cin >> n;
    vector<int> adj[n+1];
    int u, v;
    for(int i=0; i<n-1; i++){
        cin >> u >>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    pr f = dfs(1, adj, -1);
    pr s = dfs(f.second, adj, -1);
    cout << s.first;
}