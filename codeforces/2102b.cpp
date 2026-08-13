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
    for(auto &i: v) cin >>i;
    int md = abs(v[0]);
    for_each(all(v),[](int &n){n = abs(n);});
    int count{};
    sort(all(v));
    for(int i{};i<n;i++){
        if(v[i]>=md) count++;
    }
    if(count >= (n-1)/2)    cout << "YES\n";
    else    cout << "NO\n";
    
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