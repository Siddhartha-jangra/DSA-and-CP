#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n; cin >> n;
    vector<vector<int>> v(n);
    for(int i{};i<n;i++){
        int a;cin >> a;
        v[i].resize(a);
        for(int j{};j<a;j++){
            int g;cin>> g;
            v[i][j] = g;
        }
        sort(v[i].begin(),v[i].end());
    }
    int min_0th_element{INT_MAX};
    int min_1th_element{INT_MAX};
    for(int i{};i<n;i++){
        min_0th_element = min(min_0th_element,v[i][0]);
        min_1th_element = min(min_1th_element,v[i][1]);
    }
    long long sum{};
    for(int i{};i<n;i++){
        sum += v[i][1];
    }

    sum = sum + min_0th_element - min_1th_element;

    cout << sum << '\n';

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