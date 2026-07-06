#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back


int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;cin>> n >> k;
    vector<int> a;
    while(n--){
        int temp;cin >> temp; a.push_back(temp);
    }
    int ans{};
    for(int i {1};i< a.size();i++){
        if(abs(a[i]-a[i-1])<=k){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}