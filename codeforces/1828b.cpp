#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back


void solve() {
    int n; cin >> n; 
    vector<int> permutations(n);
    vector<int> pos_diff(n+1,0);

    for(int i {};i<n;i++)
        cin >> permutations[i];
    for(int i{};i< n;i++){
        pos_diff[i+1] = abs(permutations[i] - i-1);
    }    
    int ans{INT_MAX};
    for(auto i : pos_diff){
        if(i != 0)
            ans = min(ans, i);
    }
    cout << ans << endl;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; // Remove or comment out if the problem only has one test case
    while (t--) {
        solve();
    }
    return 0;
}