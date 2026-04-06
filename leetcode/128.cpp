#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// int answer(vector<int> &nums){
//     if(nums.size() == 0){
//         return 0;
//     }
//     long long maxEle{nums[0]};
//     for(auto i : nums){
//         if(i > maxEle){
//             maxEle = i;
//         }
//     }
//     vector<bool> exist(maxEle+1,0);
//     for(int i{};i<nums.size();i++){
//         exist[nums[i]] = 1;
//     }
//     int count{};
//     int maxCount{};
//     for(int i {};i<nums.size();i++){
//         if(exist[i] == false){
//             count = 0;
//         }else{
//             count++;
//             maxCount = max(count,maxCount);
//         }
//     }
//     return maxCount;
// } this will fail because there can be negative numbers also 


int answer(vector<int> &nums){
    unordered_set <int> s(nums.begin(),nums.end());
    int count{};
    int maxCount{};
    for(auto i : s){
        if(s.find(i-1) == s.end()){
            int cNum = i;
            int cCount = 1;
            while(s.find(cNum +1) != s.end()){
                cCount++;
                cNum++;
            }
            maxCount = max(maxCount,cCount);
        }
        
    }
    return maxCount;
}

int main(){
vector<int> nums ;
    cout << answer(nums);
}