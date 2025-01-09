#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define u64 unsigned long int
 
int main(){
    u64 n; cin >> n;
 
    while(n > 1){
        cout << n << " ";
        if(n & 1) n = (n * 3) + 1;
        else n = n >> 1;
    }
    cout << 1;
}