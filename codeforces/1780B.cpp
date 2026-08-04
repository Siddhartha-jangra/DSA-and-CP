#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

void solve() {
    ll n; cin >> n;
    vector<ll> v(n);
    for(ll i{};i< n;i++){
        cin >> v[i];
    }
    ll t_s = accumulate(v.begin(),v.end(),0);
    ll sum{v[0]};
    ll gcd{1};
    for(ll i{1};i<n;i++){
        gcd = max(gcd,__gcd(sum,t_s-sum));
        sum += v[i];
    }
    cout << gcd << endl;
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