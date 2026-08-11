#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

void solve() {
    int n, k; cin >> n >> k;
    for(int i{};i<n;i++){
        for(int j{};j<n;j++){
            char c; cin >> c;
            if(j%k == 0&&i%k == 0)
                cout << c;
        }
        if(i%k == 0) cout << endl;
    }
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