#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin >> n;
     vector<int> a(n);
     for(int i {};i<n;i++){
        int b;
        cin >> b;
        a[i] = b;
     }
     int ans = 0;
     if(a.size()== 1){
        ans = 0;
     }else{
        int parity = a[0] % 2;
        for(int i = 1; i < n; i++){
            if(parity == a[i] % 2){
                ans++;
            } else {
                parity = a[i] % 2;
    }
}    
        
     }
     cout << ans << '\n';

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}