#include <iostream>
#include <vector>
using namespace std;

int largestSubarr(vector<int> &nums, int k){
    int right {}, left {};
    int maxele{};
    int sum {nums[0]};
    while(right<nums.size()){
        while(left <= right && sum > k){
            sum -= nums[left];
            left++;
        }
        if(sum == k){
            maxele = max(maxele, right - left +1);

        }
        right++;
        if(right < nums.size()){
            sum += nums[right];
        }

    }

    return maxele;
}
int main(){
    vector<int> nums {10,5,2,7,1,9};
    cout << largestSubarr(nums, 15);
    
    return 0;
}