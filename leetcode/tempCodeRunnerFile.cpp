#include <iostream>
#include <vector>
using namespace std;
int maxProfit(vector<int> &nums){
    int maxdiff{INT_MIN};
    int i{};
    int j = (int)(nums.size() - 1);
    while(i < j){
        int diff{};
        if(nums[j] - nums[i] < 0){
            continue;
        }
        else{
            diff = nums[j] - nums[i];
            maxdiff = max(maxdiff, diff);
        }
        
    }
    return maxdiff;
}
int main(){
    vector<int> nums {7,1,5,3,6};
    cout << maxProfit(nums);

    return 0;
}