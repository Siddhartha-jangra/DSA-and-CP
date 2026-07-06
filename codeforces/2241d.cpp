#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

void solve() {
    int n; cin >> n;
    vector<ll> t_a(n),c_a(n);
    for(int i{};i< n;i++)
        cin >> t_a[i];
    for(int i{};i<n;i++){
        cin >> c_a[i];
    }
    bool ans = true;
    for(int i{};i< n;i++){
        if(i%2 == 0 && t_a[i] > c_a[i]){
            ans = false;
            continue;
        }
        if(i%2 != 0 && t_a[i] < c_a[i]){
            ans = false;
            continue;
        }
    }
    if(ans){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
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