#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n,k;
    cin >>n >> k;
    int ans{};
    vector<int> nums(n);
    for(int i {};i<n;i++){
        int a;
        cin >>a;
        nums[i] = a;
    }
    if(k%2 == 0){
        int count2{}, count4{};
        for(int i {};i<n;i++){
            if(nums[i]%4 ==0){
                count4++;
                count2 += 2;
                continue;
            }else if(nums[i]%2 == 0){
                count2++;
                continue;
            }
        }
        if(k == 4){
            if(count4 >0||count2 >1){
                cout<< 0 << '\n';
            }else if(count4 == 0&&count2 == 1){
                cout << 1 << '\n';
            }else if(count4 == 0&&count2 == 0){
                cout << 2 << '\n';
            }
        }else{
            if(count4 > 0||count2 >0){
                cout << 0 << '\n';
            }else{
                cout << 1 << '\n';
            }
        }
    }else{
        int ans{INT_MAX};
        for(int i {};i<n;i++){
            if(nums[i]%k == 0){
                ans = 0;
                break;
            }
            ans = min(ans,k- (nums[i]%k));
        }
        cout << ans << '\n';
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
    return 0;
}
