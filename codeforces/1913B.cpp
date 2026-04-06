#include <bits/stdc++.h>
using namespace std; 

void solve() {
    string s;
    cin >> s;
    int n {s.size()};

    int count1 {};
    int count0{};
    for(int i{};i<n;i++){
        if(s[i] == '0'){
            count0++;
        }else{
            count1++;
        }
    }
    int count_t{};
    for(int i {};i<n;i++){
        if(s[i] == '0'&&count1>0){
            count1--;
            count_t++;
        }else if(s[i] == '1'&&count0>0){
            count0--;
            count_t++;
        }else{
            break;
        }
    }
    cout << n - count_t<< '\n';
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