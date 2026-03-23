#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int nums[10][10] = {
        {1,1,1,1,1,1,1,1,1,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,1,1,1,1,1,1,1,1,1}
    };

    int t;
    cin >> t;
    while(t--) {
        char val[10][10];
        for(int i{};i<10;i++){
            string s;
            cin >> s;
            for(int j{};j<10;j++){
                val[i][j] = s[j];
            }
        }
        int ans{};
        for(int i{};i<10;i++){
            for(int j{};j<10;j++){
                if(val[i][j] == 'X'){
                    ans += nums[i][j];
                }
            }
        }
        cout << ans << '\n';

    }
    return 0;
}