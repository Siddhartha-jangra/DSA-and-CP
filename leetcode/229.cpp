/*
i have to mark two numbers here first one being the 
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
 
// vector<int> answer(vector <int>&nums){
//     int a{nums[0]},b{nums[1]};
//     int counta {1},countb{1};
//     for(int i {2};i<nums.size();i++){
//         if(counta == 0){
//             if(b)
//             a = nums[i];
//             counta++;
//         }
//         if(countb== 0&&a != nums[i]){
//             b = nums[i];
//             countb++;
//         }
        
//         if(a == nums[i]){
//             counta++;
//         }
//         else{counta--;}
//         if(b==countb){
//             countb++;
//         }else{
//             countb--;
//         }

//     }
//     vector<int> ans {a,b};
//     return ans;
// }

vector<int> answer(vector<int>&nums){
    unordered_map<int,int> count;
    for(int i:nums)
    {
        count[i]++;
    }
    int max1{INT_MIN};
    int max2{INT_MIN};
    vector<int>ans;
    int a = (int)nums.size()/3;
    for(auto i :count){
        if(i.second > a){
            ans.push_back(i.first);
        }
    }
    return ans;
}
int main(){
    vector<int> nums{1,2,3,2,3,2,3,2,4};
    answer(nums);

}
//optimal solution.
    // vector<int> majorityElement(vector<int>& nums) {
    //     int n = nums.size();

    //     int c1 = 0, c2 = 1;
    //     int cnt1 = 0, cnt2 = 0;

    //     for (int num : nums) {
    //         if (num == c1) cnt1++;
    //         else if (num == c2) cnt2++;
    //         else if (cnt1 == 0) {
    //             c1 = num;
    //             cnt1 = 1;
    //         }
    //         else if (cnt2 == 0) {
    //             c2 = num;
    //             cnt2 = 1;
    //         }
    //         else {
    //             cnt1--;
    //             cnt2--;
    //         }
    //     }

        
    //     cnt1 = cnt2 = 0;
    //     for (int num : nums) {
    //         if (num == c1) cnt1++;
    //         else if (num == c2) cnt2++;
    //     }

    //     vector<int> res;
    //     if (cnt1 > n / 3) res.push_back(c1);
    //     if (cnt2 > n / 3) res.push_back(c2);
    //     return res;
    // }