#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define u64 unsigned long int
 
int main(){
    int n, a; cin >> n;
    vector<bool> v(n+1);
    for(int i=0; i<n-1; i++){
        cin >> a;
        v[a] = 1;
    }
 
    for(int i=1; i<=n; i++){
        if(!v[i]){
            cout << i;
            return 0;
        }
    }
 
}
 