#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
typedef vector<int> vi;
typedef vector<long long> vl;
#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin >> n;
    vi v1(n),v2(n);
    vector<pair<int,int>> v(n);
    for(int i{};i<n;i++){
        cin >> v1[i];
        v[i].first = v1[i];
    }
    for(int i{};i<n;i++){
        cin >> v2[i];
        v[i].second = v2[i];
    }
    sort(all(v));
    for(int i{};i<n;i++){
        v1[i] = v[i].first;
        v2[i] = v[i].second;
    }
    for(auto i:v1){
        cout << i << " ";
    }
    cout << endl;
    for(auto i: v2){
        cout << i << " ";
    }
    cout << endl;

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