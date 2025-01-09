#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define u64 unsigned long int

int main(){
    int n, q; cin >> n >> q;
    vector<string> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    vector<vector<ll>> pre(n+1, vector<ll>(n+1, 0));

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int d = v[i-1][j-1] == '*' ? 1 : 0;

            pre[i][j] = d + pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1];
        }
    }

    int x1, y1, x2, y2;
    for(int i=0; i<q; i++){
        cin >> x1 >>  y1 >> x2 >> y2;

        ll ans = pre[x2][y2] - pre[x1-1][y2] - pre[x2][y1-1] + pre[x1-1][y1-1];
        cout << ans << endl;
    }

}