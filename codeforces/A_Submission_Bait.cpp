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
    map<int, int> freq;
    for (int i = 0; i < n; ++i) {
        int x; 
        cin >> x;
        freq[x]++;
    }
    
    for (auto const& [val, count] : freq) {
        if (count % 2 != 0) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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