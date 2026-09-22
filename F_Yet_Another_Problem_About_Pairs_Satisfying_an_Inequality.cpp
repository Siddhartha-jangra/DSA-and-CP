#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
typedef vector<int> vi;
typedef vector<long long> vl;
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n; cin >> n;
    vl v(n+1); 
    for(ll i{1};i<n+1;i++) cin >> v[i];
    vl c(n);
    for(ll i {};i<n;i++){
        c[i] = (i+1)-v[i+1];
    }
  //  ll c_n{};
    // for(ll i{};i<n;i++){
    //     if(c[i]<0){
    //         c_n++;
    //     }else
    //         break;
    // }
    // ll ans = c_n*(c_n -1)/2;
   // cout << ans << endl;
   what was the question again i don't pretty much remember right now but what the heck;

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