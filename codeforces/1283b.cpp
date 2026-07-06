#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

void solve() {
    ll n ,k ; cin >> n >> k;
    ll ans{};
    ll remaining_candies{n%k};
    ans = (n/k);
    ans *= k;
    if(remaining_candies > k/2){
        ans += k/2;
    }else{
        ans += remaining_candies;
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