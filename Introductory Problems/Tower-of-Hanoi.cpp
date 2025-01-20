#include <bits/stdc++.h>
using namespace std;
#define ll long long

void help(int n, int src, int aux, int dest){
    if(n == 1){
        cout << src << " " << dest << endl;
        return ;
    }

    help(n-1, src, dest, aux);
    cout << src << " " << dest << endl;
    help(n-1, aux, src, dest);
}

int main(){
    int n; cin >> n;
    cout << pow(2, n) - 1 << endl;
    help(n, 1, 2, 3);
}

