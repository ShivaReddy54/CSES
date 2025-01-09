#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define u64 unsigned long int
 
 
 
class Node{
public:
    Node* left, *right;
    Node(){
        left = right = NULL;
    }
};
 
class MAX_XOR{
public:
    Node* root;
 
    MAX_XOR(){
        root = new Node();
    }
 
    void insert(int n){
        Node* curr = root;
 
        for(int i=30; i>=0; i--){
            int x = (n >> i) & 1;
 
            if(x){ // set bit
                if(!curr->right) curr->right = new Node();
                curr = curr->right;
            }
            else{
                if(!curr->left) curr->left = new Node();
                curr = curr->left;
            }
        }
    }
 
    int xorry(int n){
        int ans = 0;
        Node* curr = root;
        for(int i=30; i>=0; i--){
            int x = (n >> i) & 1;
 
            if(x){
                if(curr->left){
                    ans |= (1 << i);
                    curr = curr->left;
                }
                else curr = curr->right;
            }
            else {
                if(curr->right){
                    ans |= (1 << i);
                    curr = curr->right;
                }
                else curr = curr->left;
            }
        }
 
        return ans;
    }
};
 
int main(){
 
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
 
    MAX_XOR ans;
    ans.insert(0); // base case
    int xo = 0, a = 0;
 
    for(auto i : v){
        xo ^= i;
        a = max(a, ans.xorry(xo));
        ans.insert(xo);
    }
    cout << a;
}