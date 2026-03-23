#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>> n;
    vector<int> nums(n);
    int sum{};
    int prod{1};
    int count {};
    for(int i{};i<n;i++){
        int a;
        cin >> a;
        nums[i] = a;
        sum += a;
        prod *= a;
    }
    int i {};
    int ans{};
    while(sum < 0||prod == -1 &&i <n){
        if(nums[i]==-1){
            nums[i] = 1;
            sum += 2;
            prod *= -1;
            ans++;
        }
        i++;
    }
    cout << ans <<'\n';
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