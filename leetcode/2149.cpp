#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> pos, neg;
    for(int i : nums){
        if(i > 0){
            pos.push_back(i);
        }
        else{
            neg.push_back(i);
        }
    }
    int j{};
    for(int i{};i< nums.size();i++){
        if(i%2 == 0){
            nums[i] = pos[j];
            continue;
        }
        else{
            nums[i] = neg[j];
            j++;
        }

    }
    return nums;
}   

int main(){
    vector<int> nums{3,1,-2,-5,2,-4};
    vector<int> ans = rearrangeArray(nums);
    for(int i : ans){
        cout << i << " " ;
    }
    return 0;
}