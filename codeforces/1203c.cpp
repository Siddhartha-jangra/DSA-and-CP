#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;cin>> n;
    vector<int> nums(n);
    for(int i{};i<n;i++){
        int a;
        cin >> a;
        nums[i] = a;
    }
    auto it = max_element(nums.begin(),nums.end());
    int m = *it;

    vector<int>lp(m);
    vector<int>p;
    

    for(int i{};i<=m; i++){
        if(lp[i] == 0){
            lp[i] = i;
            p.push_back(i);
        }
        for(int j{};i*p[j] <= m;j++){
            lp[i*p[j]] = p[j];
            if(p[j] == lp[i]){
                break;
            }
        }
    }
    set<int> s;
    for(int i{};i<lp.size();i++){
        s.insert(lp[i]);
    }

    cout<< s.size() << '\n';


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