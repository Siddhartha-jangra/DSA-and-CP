#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
typedef vector<int> vi;
typedef vector<long long> vl;
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;cin>> n;
    vl v(n);
    for(auto &i:v) cin >> i;
    unordered_set<ll> c;
    for(ll i{};i< n;i++){
        c.insert(v[i]-i);
    }
        ll ans{};

    for(auto i: c){
        if(c.find((-1*i))!=c.end()){
            ans++;
            c.erase(i);
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