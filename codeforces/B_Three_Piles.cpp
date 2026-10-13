#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
typedef vector<int> vi;
typedef vector<long long> vl;
#define all(x) (x).begin(), (x).end()

void solve() {
    ll a , b, c; 
    cin >> a >> b >> c;
    ll ans {};
    if(b < a){
        ans = (a + c)-b;
    }else if((a+c)> b){
        ans = max(b-a,(a+c) - b);
    }else{
        ans = b - a;
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