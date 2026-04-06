#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>> n;
    vector <int> ans;
    int k = 1;
    int m = 0;
    for(int i{};i<n ;i++){

        ans.push_back(3*n-m);
        ans.push_back(n*3-m-1);
        ans.push_back(k);
        m += 2;
        k++;
    }
    for(int i : ans){
        cout << i << " "; 
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}