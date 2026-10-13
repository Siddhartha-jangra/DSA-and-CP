#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        int low = 0, high = (int)nums.size() - 1;
        if((nums.size()/2)%2 == 0){
            while(low <= high){
                int mid = low + (high - low)/2;

                if((high - low) == 2){
                    if(nums[mid] == nums[mid +1])   return nums[mid -1];
                    else    return nums[mid+1];
                }

                if(nums[mid + 1] == nums[mid]){
                    low = mid + 2;
                }else if(nums[mid-1] == nums[mid]){
                    high = mid - 2;
                }
                else{
                    return nums[mid];
                }
            }
        }else{
            while(low <= high){
                int mid = low + (high - low)/2;

                if((high - low) == 2){
                    if(nums[mid] == nums[mid +1])   return nums[mid -1];
                    else    return nums[mid+1];
                }

                if(nums[mid + 1] == nums[mid]){
                    high = mid - 1;
                }else if(nums[mid-1] == nums[mid]){
                    low = mid + 1;
                }
                else{
                    return nums[mid];
                }
            }
        }
        return 0;
    }
};
int main() {
    Solution solver;

    // Test Case 1
    vector<int> nums1 = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << "Input: [1, 1, 2, 3, 3, 4, 4, 8, 8]\n";
    cout << "Output: " << solver.singleNonDuplicate(nums1) << "\n\n";

    // Test Case 2
    vector<int> nums2 = {3, 3, 7, 7, 10, 11, 11};
    cout << "Input: [3, 3, 7, 7, 10, 11, 11]\n";
    cout << "Output: " << solver.singleNonDuplicate(nums2) << "\n";

    return 0;
}