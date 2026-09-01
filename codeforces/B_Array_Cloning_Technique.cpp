//maine max freq nikaalni ha then maine us value of swap maarna hai copy arrays ke saayth
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
typedef vector<int> vi;
typedef vector<long long> vl;
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n; cin >> n;
    vl v(n);
    for(auto &i:v){
        cin >> i;
    }
    sort(all(v));
    ll cf{1},mf{INT_MIN};
    for(int i{1};i<n;i++){
        if(v[i-1] == v[i]){
            cf++;
            mf = max(mf,cf);
        }else{
            cf = 1;
        }not complete has to be completed today by any means necessary 
        
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