#include <bits/stdc++.h>
using namespace std; 

void solve(vector<int> &prime) {
    int n;
    cin >> n;
    vector<long long> nums;


    for(int i{};i<n;i++){
        nums.push_back(1LL * prime[i+1] * prime[i+2]);
    }
    for(int i : nums){
        cout << i << " ";
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<bool> p(200005, 1);
    vector<int> prime;
    for(int i = 2;i*i<200005;i++){
        if(p[i]){
            for(int j = i*i;j<200005;j+=i){
                p[j] = 0;
            }
        }
    }
    for(int i{2};i<200005;i++){
        if(p[i]){
            prime.push_back(i);
        }
    }

    int t;
    cin >> t;
    while(t--) {
        solve(prime);
    }
    return 0;
}