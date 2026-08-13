#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
typedef vector<int> vi;
typedef vector<long long> vl;
#define all(x) (x).begin(), (x).end()


void solve() {
    ll n,m; cin >> n >> m;
    vector<vector<ll>> v(m,vector<ll>(n));
    for(ll i{};i<n;i++){
        for(ll j{};j<m;j++){
            cin >> v[j][i];
        }
    }
    ll ans{};
    for(ll i{};i<m;i++){
        sort(all(v[i]));
    }
    for(ll i{};i<m;i++){
        ll l = n-1, k = 0;

        for(ll j{};j<n;j++){
            ans += l*v[i][j] - k*v[i][j];
            l--;k++;
        }
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