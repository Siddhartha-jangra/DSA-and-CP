#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve() {
    ll n, p;
    if (!(cin >> n >> p)) return;
    
    vector<ll> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    vector<pair<ll, ll>> m;
    for(int i = 0; i < n; i++){
        m.push_back({b[i], a[i]});
    }
    
    // 1. Sort by sharing cost (b[i])
    sort(m.begin(), m.end());

    // 2. Start by paying p for the first person
    ll sum = p; 
    ll remaining = n - 1;

    for(int i = 0; i < n && remaining > 0; i++){
        ll cost = m[i].first;
        ll capacity = m[i].second;

        // 3. Only use this person if they are cheaper than the source price p
        if (cost < p) {
            ll can_take = min(remaining, capacity);
            sum += can_take * cost;
            remaining -= can_take;
        } else {
            // If the cheapest person left is >= p, stop using sharers
            break; 
        }
    }

    // 4. Anyone left over must be notified at the original price p
    if (remaining > 0) {
        sum += remaining * p;
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