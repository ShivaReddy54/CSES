#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define u64 unsigned long int

int main(){
    int n; cin >> n;
    if(n == 1) cout << 1;
    else if(n == 2 or n == 3) cout << "NO SOLUTION";
    else if(n == 4) cout << "2 4 1 3";
    else{
        for(int i=n; i>=1; i--)
            if(i % 2 == 0) cout << i << " ";
        for(int i=n; i>=1; i--)
            if(i & 1) cout << i << " ";
    }
}