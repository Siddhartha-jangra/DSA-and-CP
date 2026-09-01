#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
typedef vector<int> vi;
typedef vector<long long> vl;
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k; cin >> n>> k;

    vi v(n);
    for(auto &i: v) cin >> i;

    sort(all(v));

    int i{},j{n-1};
    int count{};

    while(i<j){
        if(v[i]+v[j] == k){
            count++;
            i++;j--; 
        }
        else if(v[i]+v[j]<k){
            i++;
        }
        else{
            j--;
        }
    }
    cout << count << endl;
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