#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back


vector<bool> sieve(int n) {
    // is_prime[i] will keep track of whether i is prime
    vector<bool> is_prime(n + 1, true);
    
    // 0 and 1 are not prime numbers
    is_prime[0] = is_prime[1] = false;
    
    for (ll p = 2; p * p <= n; p++) {
        // If is_prime[p] is still true, then it is a prime
        if (is_prime[p]) {
            // Mark all multiples of p starting from p*p as false
            for (ll i = p * p; i <= n; i += p) {
                is_prime[i] = false;
            }
        }
    }
    
    
    return is_prime;
}

long long power10(int exp) {
    long long res = 1;
    while (exp--) res *= 10;
    return res;
}
void solve() {
    int a,b,c; cin >> a >> b >> c;
    vector<bool> primes = sieve(10*c);
    ll gcd{};
    for(ll i{(power10(c-1))};i< c*10;i++){
        if(primes[i]){
            gcd = i;
            break;
        }
    }
    ll r = power10(a-1)%gcd;
    ll R = power10(b-1)%gcd;
    cout << power10(a-1) - r + gcd << " " << power10(b-1) - R + gcd*2 << endl;
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