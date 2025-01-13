#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    ll tot = (n * (n + 1)) / 2;

    if (tot % 2 != 0) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        tot /= 2;
        vector<ll> a, b;

        for (ll i = n; i > 0; i--) {
            if (tot >= i) {
                a.push_back(i);
                tot -= i;
            } else b.push_back(i);

        }

        cout << a.size() << endl;
        for (auto x : a) cout << x << " ";
        cout << endl;

        cout << b.size() << endl;
        for (auto x : b) cout << x << " ";
        cout << endl;
    }
}
