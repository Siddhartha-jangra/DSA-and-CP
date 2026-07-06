#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

void solve() {
    int x; cin>> x;
    string s; cin >> s;
    int count{1};
    int counter{s[0]};

    for(int i{};i< s.size();i++){
        if(s[i] == counter){
            continue;
        }else{
            counter = s[i];
            count++;
        }
    }
    if(count == 2){
        cout << 2 << '\n';
    }else{
        cout << 1 << '\n';
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