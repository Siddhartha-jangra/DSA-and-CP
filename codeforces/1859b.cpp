#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n; cin >> n;
    vector<vector<int>> v(n);
    for(int i{};i<n;i++){
        int a;cin >> a;
        for(int j{};j<a;j++){
            int g;cin>> g;
            v[i][j] = g;
        }
        sort(v[i].begin(),v[i].end());
    }
    int minEle{INT_MAX};
    int maxEle{INT_MIN};
    for(int i{};i<n;i++){
        maxEle = max(maxEle,v[i][1]);
        minEle = min(minEle,v[i][1]);
        
    }

    for(int i{};i<n;i++){
        sort()
    }
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