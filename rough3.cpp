#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
void solve(vector<ll> &prime,vector<bool> &is_prime) {
    ll n;
    cin >> n;
    n -=1;
    int i{};
    bool ans = 0;
    while(prime[i]< n){
        if(is_prime[n-prime[i]]){
            ans = 1;
            break;
        }else{
            i++;
        }
    }
    if(ans){
        cout << "yes\n";
    }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<ll> prime;
    vector<bool> is_prime(200001,1);
    for(int i {2};i*i<=200000;i++){
        if(is_prime[i]){
            prime.push_back(i);
            for(int j {i*i};j<200000;j+=i){
                is_prime[j]  = 0;
            }
        }
    }
    int t;
    cin >> t;
    while(t--) {
        solve(prime,is_prime);
    }
    return 0;
}