#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
   vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sortedNums = nums;
        sort(sortedNums.begin(), sortedNums.end());
        int a{};
        int n {nums.size()};
        int b {n-1};
        int ele1{},ele2{};
        while(a<b){
            if(sortedNums[a]+sortedNums[b] == target){
                ele1 = sortedNums[a];
                ele2 = sortedNums[b];
                break;
            }
            else if(sortedNums[a]+sortedNums[b] < target){
                a++;
            }
            else{
                b--;
            }
        }
        vector<int> ans;
        for(int i {}; i<n;i++){
            if(nums[i] == ele1||nums[i] == ele2){
                ans.push_back(i);
            }
        }
        return ans;
    }
int main(){
    vector<int> nums = {3,2,4};
   vector<int> ans = twoSum(nums, 6);
   cout << ans[0] << " " << ans[1] << endl;
    return 0;
}