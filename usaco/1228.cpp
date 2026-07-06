#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back


int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    vector<int> G,L;
    while(n--){
        pair<char,int> p;
        cin >> p.first >> p.second;
        if(p.first == 'G'){G.pb(p.second);}
        else{L.pb(p.second);}
    }
    int maxl{L[0]};
    for(auto i: L){maxl = max(maxl,i);}
    int ming{G[0]};
    for(auto i: G){ming = min(ming,i);}
    int count{};
    for(auto i: L){
        if(maxl<i){
            count++;
        }
    }
    for(auto i: G){
        if(ming > i){count++;}
    }
    if(G.size() == 1&&L.size() == 1&&G[0] > L[0]){
        count++;
    }
    cout << count << '\n';
    return 0;
}