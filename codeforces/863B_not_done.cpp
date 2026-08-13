#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
typedef vector<int> vi;
typedef vector<long long> vl;
#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin >> n;
    vi v(2*n);
    for(int i{};i<2*n;i++){
        cin >> v[i];
    }
    sort(all(v));
    int ans{};
    v.pop_back();
    v.pop_back();
    for(int i{};i<2*n-2;i++){
        int md{INT_MAX};
        for(int j{1};j<2*n-2;j++){
            md = min(v[j] - v[i],md);
        }
        ans += md;
    }
    cout << ans << endl;
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
}sd;khg