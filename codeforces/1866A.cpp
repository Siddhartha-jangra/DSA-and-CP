#include <iostream>
#include <vector>
using namespace std;

int main(){

        int n;
        cin >> n;
        vector<int> nums;
        for(int i{};i<n;i++){
            int a;
            cin >> a;
            nums.push_back(a);
        }
        int ans{nums[0]};
        for(int i{};i<n;i++){
            ans = abs(min(abs(nums[i]), ans));
        }
        cout << abs(ans) <<'\n';

    

    return 0;
}