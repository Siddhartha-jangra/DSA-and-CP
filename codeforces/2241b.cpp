#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

void solve() {
    string x; cin >> x;
    ll a = x.size();
    ll y = pow(10,a) +1;
    cout << y << '\n';
    

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