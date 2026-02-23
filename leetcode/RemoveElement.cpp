#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {

    for(int i{}; i <nums.size();i++){
        if(val == nums[i]){
            nums.erase(nums.begin() + i);
        }
    }
    return nums.size();
}

int main(){
    vector<int> nums {1,2,1,3,2,4,2,4};
    int val {4};
    cout << removeElement(nums, val);
    return 0;

}