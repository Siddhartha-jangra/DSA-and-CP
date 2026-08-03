#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

void solve() {
    int n;cin >>n; 
    vector<int> nums(n);
    for(int i{};i<n;i++)
        cin >> nums[i];
    int max = *max_element(nums.begin(),nums.end()) +1;
    int min = *min_element(nums.begin(),nums.end());
    int ans = max - min;
    cout << ans << endl;

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