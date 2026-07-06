#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;cin >> n >> m;
    multiset <int> a;
    while(n--){int temp; cin >> temp; a.insert(temp);}

    vector<int> v;
    while(m--){int temp; cin >> temp; v.pb(temp);}

    for(auto i: v){
        auto it = a.upper_bound(i);
        if(it == a.begin()){cout << -1 << '\n';}
        else{
            it--;
            cout << *it << '\n';
            a.erase(it);
        }
    }

    return 0;
}