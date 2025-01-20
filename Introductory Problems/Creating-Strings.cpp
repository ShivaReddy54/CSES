#include <bits/stdc++.h>
using namespace std;
#define ll long long

set<string> v;
void help(string &s, int i){
    if(i == s.size()){
        v.insert(s);
        return;
    }

    for(int j=i; j<s.size(); j++){
        swap(s[i], s[j]);
        help(s, i+1);
        swap(s[i], s[j]);
    }
}

int main(){
    string s; cin >> s;
    help(s, 0);
    cout << v.size() << endl;
    for(auto i : v) cout << i << endl;
}
