#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back


    bool hasGroupsSizeX(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        vector<int> count;
        int cc{};
        int ce{deck[0]};
        for(int i{};i<deck.size();i++){
            if(ce == deck[i]){
                cc++;
            }else{
                count.push_back(cc);
                cc = 1;
                ce = deck[i];
            }
            if(i == deck.size()-1){
                count.push_back(cc);
            }
        }
        int gcd = __gcd(0,count[0]);
        for(int i{};i<count.size();i++){
            gcd = __gcd(gcd,count[i]);
        }
        return gcd>1?true:false;
    }


int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
 vector<int> deck = {1,1,2,2,2,2};
    cout << hasGroupsSizeX(deck);
    return 0;
}