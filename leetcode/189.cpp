#include <iostream>
#include <vector>
using namespace std;


void rotate(vector<int>& nums, int k) {
    for(int i{nums.size()-1}; i> nums.size() -1 - k;i --){
        int curr = nums[nums.size() - 1];
        nums.erase(nums.size() -1);
        nums.insert(0, curr);
    }
}

int main(){
    vector<int> nums {1,2,3,4,5,6,7};
    int k = 3;
    rotate(nums, k);
    for(int i : nums){
        cout << i << " " ;
    }
    return 0;
}