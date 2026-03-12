#include<iostream>
#include<vector>
using namespace std;
void sortColors(vector<int> &nums){
// this method  can be used if we know the total type of elementst (here it is 3) int the array 
// then we can just sort it out. 
    void sortColors(vector<int>& nums) {
        int low=0,mid=0,high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;mid++;
            }else if(nums[mid]==1){
                mid++;
            }else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
                
            }
        }
    }

}
int main(){
    vector<int> nums {1,0,2,0,1,2,1,2,0,0};
    sortColors(nums);

}