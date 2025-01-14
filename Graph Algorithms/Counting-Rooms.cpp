#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, m;
void dfs(int i, int j, vector<string>& v){
    if(i<0 or i>=n or j<0 or j>=m or v[i][j] == '#' ) return;

    v[i][j] = '#';

    dfs(i-1, j,v); // up
    dfs(i+1, j, v); // down
    dfs(i, j-1, v); // left
    dfs(i, j+1, v); // right
}

int main(){
    n, m; cin >> n >> m;
    vector<string> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    int ans = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(v[i][j] == '.'){
                dfs(i, j, v); ans++;
            }
        }
    }
    cout << ans;
}