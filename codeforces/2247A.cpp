#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

void solve() {
     int n; cin >> n;

     vector<int> v(n);
     for(int i{};i<n;i++)
        cin >> v[i];
     if(n%2 == 1){
        cout << "NO\n";
        return;
     }
    if(n == 2 && v[0] == v[1]){
        cout << "NO\n";
        return;
    }
    else{
        cout << "YES\n";
        return ;
    }
    int sum = accumulate(v.begin(),v.end()-1,0);
    bool ans =  (abs(sum) < n - 1);
    if(ans)
        cout << "YES\n";
    else{
        cout << "NO\n";
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