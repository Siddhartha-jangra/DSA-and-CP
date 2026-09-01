#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
typedef vector<int> vi;
typedef vector<long long> vl;
#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin >> n;
    vi v(n);
    for(auto &i: v) cin >> i;
    sort(all(v));
    ll h = accumulate(v.begin(),v.begin()+(n/2),0);
    ll b = accumulate(v.begin()+(n/2),v.end(),0);
    cout << (ll)(h*h+b*b) << endl;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t; // Remove or comment out if the problem only has one test case
    while (t--) {
        solve();
    }
    return 0;
}