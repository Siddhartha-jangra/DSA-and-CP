#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

void solve() {
    ll n; cin >> n;
    string s; cin >> s;
    if(s.size() < 2){
        cout << 0 << endl;
        return;
    }
    else if(s.size() == 2){
        cout << 1 << endl;
        return;
    }
    bool ans{};
    bool ans2{};
    for(int i{};i<n-2;i++){
        if(s[i] == s[i+2] && s[i] != s[i+1]){
            ans = 1;
            break;
        }
        if(s[i] != s[i+1]&&s[i+1] != s[i+2]){
            ans2 = 1;
            break;
        }
    }
    int count{1};
    for(int i{1};i<s.size();i++){
        if(s[i] != s[i-1])
            count++;
    }
    if(ans){
        cout <<  count - 2 << endl;
        return;
    }else if (ans2){
        cout << count - 1 << endl;
    }else{
        cout << count << endl;
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