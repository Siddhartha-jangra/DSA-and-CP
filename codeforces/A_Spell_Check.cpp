#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
typedef vector<int> vi;
typedef vector<long long> vl;
#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    if(n != 5){
        cout << "NO\n"; 
        return;
    }
    string c = "Timur";
    sort(all(c));
    sort(all(s));
    cout << (s == c?"YES\n":"NO\n");
    
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