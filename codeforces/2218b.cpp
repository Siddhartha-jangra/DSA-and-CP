#include <bits/stdc++.h>
using namespace std; 

void solve() {
    vector <int> nums(7);
    
    for(int i {};i<7;i++){
        int a;
        cin>>a;
        nums[i] = a;
    }
    int maxNum {nums[0]};
    int count{};
    for(int i {};i<7;i++){
        if(maxNum == nums[i]){
            count++;

        }
        maxNum = max(maxNum, nums[i]);
    }
    int sum {};
    bool ans = 1;
    for(int i{};i<7;i++){
        if(nums[i]== maxNum&&ans == 1){
            ans = 0;
            sum += nums[i];
            continue;
        }else{
            nums[i] *= -1;
        }
        sum += nums[i];
    }

    cout << sum << '\n';
    
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