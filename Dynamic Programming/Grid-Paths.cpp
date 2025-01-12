#include <bits/stdc++.h>
using namespace std;
#define ll long long

int mod = 1e9+7;
int help(int i, int j, int n, vector<string>& v, vector<vector<int>>& dp){
    if(i >= n or j >= n or v[i][j] == '*') return 0;
    if(i == n-1 and j == n-1) return 1;
    if(dp[i][j] != -1) return dp[i][j];

    int right = help(i, j+1, n, v, dp);
    int down = help(i+1, j, n, v, dp);

    return dp[i][j] = (right + down) % mod;
}

int main(){
    int n; cin >> n;
    vector<string> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    vector<vector<int>> dp(n+1, vector<int>(n+1, -1));

    cout << help(0, 0, n, v, dp);

}