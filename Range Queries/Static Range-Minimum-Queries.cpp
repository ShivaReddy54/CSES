#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define u64 unsigned long int


class SparseTable {
private:
    vector<vector<ll>> table;
    vector<ll> log;

public:
    SparseTable(vector<ll>& arr) {
        int n = arr.size();
        int maxLog = log2(n) + 1;

        table.resize(n, vector<ll>(maxLog));
        log.resize(n + 1);

        log[1] = 0;
        for (int i = 2; i <= n; i++)
            log[i] = log[i / 2] + 1;

        for (int i = 0; i < n; i++)
            table[i][0] = arr[i];

        for (int j = 1; (1 << j) <= n; j++)
            for (int i = 0; i + (1 << j) - 1 < n; i++)
                table[i][j] = min(table[i][j - 1], table[i + (1 << (j - 1))][j - 1]);
    }

    ll query(int L, int R) {
        int j = log[R - L + 1];
        return min(table[L][j], table[R - (1 << j) + 1][j]);
    }
};


int main(){
    int n, q; cin >> n >> q;
    vector<ll> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    SparseTable st(v);
    int a, b;
    for(int i=0; i<q; i++){
        cin >> a >> b;
        a--; b--;

        cout << st.query(a, b) << endl;
    }
}