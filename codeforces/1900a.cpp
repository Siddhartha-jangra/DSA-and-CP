#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t){
        vector<char> p;
        int n;
        cin >> n;
        while(n){
            char a;
            cin >> a;
            p.push_back(a);
            n--;
        }
        int count {};
        int count3 {};
        int ans;
        for(int i{};i< p.size();i++){
            if(p[i] == '.'){
                count++;
                count3++;
                if(count3 == 3){
                    ans = 2;
                    break;
                }
            }
            else{
                count3 = 0;
            }
            ans = count;
        }
        cout << ans << '\n';
        t--;
    }
    return 0;
}