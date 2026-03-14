#include <iostream>
#include <vector>
#include <climits>
using namespace std;
//brute force
// int maxProfit(vector<int> &nums){
//     int maxdiff{INT_MIN};
//     for(int i {};i < nums.size();i++){
//         for(int j {i + 1};j< nums.size();j++){
//             int diff{};
//             if(nums[i] < nums[j]){
//             diff = nums[j] - nums[i];}
//             maxdiff = max(maxdiff, diff);
//         }
//     }
//     return maxdiff;
// }

//it's done
int maxProfit(vector<int> &nums){
    int maxdiff{};
    int buy = nums[0];
    for(int i{};i< nums.size();i++){
        if(nums[i] - buy < 0){
            but = nums[i];
        }
        else{
            maxdiff = max(maxdiff, nums[i] - buy);
        }
    }
    return maxdiff;
}
int main(){
    vector<int> nums {7,1,5,3,6};
    cout << maxProfit(nums);

    return 0;
}