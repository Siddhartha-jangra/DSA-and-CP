// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// #define pb push_back

// void solve() {
//     int n;cin >> n;
//     int k; cin >> k;
//     string s;cin>>s;

//     unordered_map <char,int> m;
//     for(int i {};i< s.size();i++){ m[s[i]]++;}
//     int count{};
//     int count1{};
//     int count2{};
//     for(auto i: m)
//     {   
//         if(i.second%2 == 1){
//             count1++;
//         }
//         if(k == 0){
//             count++;
//             continue;
//         }
//         if(i.second%2 == 1){
//             k--;count2++;
//         }
//     }
//     bool ans = 0;
//     if(count==1&&count1-count2 == 1){
//         ans = 1;
//     }
//     if(k%2 == 0){
//         ans = 1;
//     }
//     if(ans){
//         cout << "YES\n";
//     }else{cout << "NO\n";}
// }


// int main() {
//     // Fast I/O
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t = 1;
//     cin >> t; // Remove or comment out if the problem only has one test case
//     while (t--) {
//         solve();
//     }
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    // Step 1: Count frequencies
    unordered_map<char, int> m;
    for (char c : s) {
        m[c]++;
    }

    // Step 2: Count how many characters have an odd frequency
    int odd_count = 0;
    for (auto i : m) {
        if (i.second % 2 != 0) {
            odd_count++;
        }
    }

    // Step 3: Check if k is large enough to reduce odds to <= 1
    // We need to eliminate at least (odd_count - 1) odd frequencies.
    if (k >= odd_count - 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}