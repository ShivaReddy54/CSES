#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define u64 unsigned long int

int main(){
    string s;
    cin >> s;

    int ans = 1, curr = 1;
    char c = s[0];
    for(int i=1; i<s.size(); i++){
        if(s[i] == c) curr++;
        else {
            ans = max(ans, curr);
            curr = 1;
            c = s[i];
        }
    }
    ans = max(ans, curr);
    cout << ans ;
}