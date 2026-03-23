#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t{};
    cin >> t;
    while(t){
        int n , k;
        cin >> n >> k;
        vector<int > nums;
        for(int i {};i < n;i++){
            int a;
            cin >> a;
            nums.push_back(a);
        }
        bool ans = 0;
        for(int j{};j<n;j++){
            if(nums[j] == k){
                ans = 1;
                break;
            }
            
        }
        if(ans){
            cout << "YES" << '\n';

        }
        else{
            cout << "NO\n";
        }
        t--;
    }
    return 0;
}
