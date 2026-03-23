#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n,q;
    cin >> n >> q;
    vector<int> a(n), b(n);
    for(int i {};i< n;i++){
        int x;
        cin >> x;
        a[i] = x;
    }
    for(int i{};i<n;i++){
        int x;
        cin >> x;
        b[i]  = x;
    }

    while(q--){
        int l,r;
        cin >> l>>r;
        for(int j = l;j<= r;j++){
            int large{a[l-1]};
            if(j-1 == r-1){
                large = max(large, b[j-1]);
                a[j-1] = large;
            }else{
                large = max(large,max(b[j-1],a[j]));
                a[j-1] = large;
            }
            
        }
        int sum{};
        for(int i{l-1};i<r;i++){
            sum += a[i];
        }
        cout << sum << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}