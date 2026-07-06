/*
in:7
7 0 0 1 4 0 6
it will use the 3 and 2 bt then will have no option but to use 5 on 5;
there is some other logic here. at the end
*/


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

void solve() {
    int n; cin>> n;
    vector<int> g(n);

    for(int i{};i< n;i++){ 
        cin >> g[i] ; }
    
    set <int> p_g;
    vector<int> m_i;
    for(int i {};i<n;i++){
        if(g[i] == 0){
            m_i.pb(i);
        }else{
            p_g.insert(g[i]);
        }
    }

    unordered_set <int>m_g;
    for(int i{1};i<= n;i++){
        if(p_g.find(i) == p_g.end()){
            m_g.insert(i);
        }
    }

    for(int i{};i< m_i.size();i++){
        for(auto j: m_g){
            if(m_i[i] == j){
                continue;
            }else{
                g[m_i[i]] = j;
                m_g.erase(j);
                break;
            }
        }
    }

    for(auto i: g){
        cout << i << " " ;
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    solve();
    
    return 0;
}