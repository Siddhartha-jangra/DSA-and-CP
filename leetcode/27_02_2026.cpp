#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int>& nums) {
    int idx {};
    while(idx <= nums.size() - 1){
        if(idx == nums.size()-1){
            return 1;
        }
        if(nums[idx] <= nums[idx+1]){
            idx++;
        }
        else{
            idx++;
            break;
        }
    }
    
    for(int i{}; i < idx; i++){
        int curr = nums[0];
        nums.erase(nums.begin());
        nums.push_back(curr);
    }

    for(int i {}; i < nums.size() -1; i++){
        if(nums[i] > nums[i+1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    vector<int> nums{4,5,6,1,2,3};
    cout << check(nums);

    return 0;
}