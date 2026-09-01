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
    int mi{INT_MAX},ma{INT_MIN};
    for(auto &i:v){
        cin >> i;
        mi = min(mi,i);
        ma = max(mi,i);
    }
    if(mi == ma){
        cout << (ll)n*(n-1) << endl;
        return;
    }
    int mif{},maf{};
    mif = count(all(v),mi);
    maf = count(all(v),ma);
    long long ans = 2*mif*maf;
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