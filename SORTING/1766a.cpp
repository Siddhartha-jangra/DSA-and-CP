#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin >> n;
     int digit {-1};
     int lastdigit {};
    while(n >0){
        lastdigit = n%10;

        n /= 10;
        digit++;

    }
    int ans{lastdigit};
    while(digit){
        ans += 9;
        digit--;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}