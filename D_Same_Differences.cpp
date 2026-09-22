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

    vi c(n);
    for(int i {};i<n;i++){
        c[i] = v[i] - i;
    }

    sort(all(c));

    int c_e{c[0]};
    int f{1};
    ll ans{};
    
    for(int i{1};i<n;i++){
        if(c_e == c[i]){
            f++;
        }
        else{
            ans += f*(f-1)/2;
            c_e = c[i];
            f = 1;
        }
        if(i == n-1 && f >1){
            ans += f*(f-1)/2;
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