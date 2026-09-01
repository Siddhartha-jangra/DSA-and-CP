#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
typedef vector<int> vi;
typedef vector<long long> vl;
#define all(x) (x).begin(), (x).end()

void solve() {
    int n; 
    cin >> n;
    vector<long long> v(n);
    for (auto &x : v) cin >> x;
    sort(v.begin(), v.end());

    int max_len = 0;
    int k = 0;
    for (int i = 0; i < n; i++) {
        while (k < n && (k - i < 2 || v[i] + v[i + 1] > v[k])) {
            k++;
        }
        max_len = max(max_len, k - i);
    }

    cout << n - max_len << "\n";
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