#include <iostream>
#include <vector>
using namespace std;

//brute force (longest subarray)
// int lsubarr(vector<int> &nums, int k){
//     int mcount{};
//     for(int i {}; i< nums.size();i++){
//         int csum{};
//         int ccount{};
//         for(int j{i};j< nums.size();j++){
//             csum += nums[j];
//             ccount++;
//             if(csum == k){
//                 mcount = max(mcount, ccount);
//             }
//         }
//     }
//     return mcount;
// }


//optimal approach
int lsubarr(vector<int> &nums,int k){
    
}


int main(){
    vector<int> nums {10,5,2,7,1,9};
    cout << lsubarr(nums, 15);
    return 0;
}