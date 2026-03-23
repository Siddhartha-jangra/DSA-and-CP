#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int maxel{INT_MIN};
    int idx{};
    for(int i {};i<n;i++){
        int b;
        cin>> b;
        a[i] = b;
        maxel = max(maxel, a[i]);
        if(maxel == a[i]){
            idx = i;
        }
    }
    int s{};
    int i{1};
    while(i<n){
        if(a[i] < a[i-1]){
            s = i;
            break;
        }
        i++;
    }
    int l{s+1};
    while(i<n-1){
        if(a[i] > a[i+1]){
            l = i;
        }
        i++;
    }

    reverse(a.begin() +s,a.begin()+l+1);
    for(auto i: a){
        cout << i << " " ;
    }
    cout << '\n';
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