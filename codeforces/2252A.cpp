#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i{};i<n;i++){
        cin >> v[i];
    }
    int sum{v[0]};

    for(int i{1};i<n;i++){
        sum += v[i];
        if(v[i]==v[i-1])
            break;
    }
    cout << sum << endl;
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