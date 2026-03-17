
/*
what i did here is first i will find the index where the current element is smaller than the next one;
then i will find the index of the next larger element and swap them
then i will reverse the array on the right side of that index.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Solution class
    void nextPermutation(vector<int>& nums) {
        int idx{};
        bool sorted = 0;
        for(int i {};i < nums.size() -1;i++){
            if(nums[i] < nums[i+1]){
                sorted = 1;
            }
            break;
        }
        if(sorted){
            for(int i {(int)nums.size()-2};i >= 0;i--){
                if(nums[i] < nums[i+1]){
                    idx = i;
                    break;
                }
            }
                for(int i{(int)nums.size()- 1};i > idx;i--){
                    if(nums[i] > nums[idx]){
                        swap(nums[idx],nums[i]);
                        break;
                    }
            }
            reverse(nums.begin() + idx + 1,nums.end());
        }
        else{
            reverse(nums.begin(),nums.end());
        }
    }

    // // Fnction to find next permutation
    // void nextPermutation(vector<int>& nums) {
    //     // Set index to -1
    //     int index = -1;

    //     // Find the first decreasing element from end
    //     for (int i = nums.size() - 2; i >= 0; i--) {
    //         // If a smaller element found
    //         if (nums[i] < nums[i + 1]) {
    //             // Store index
    //             index = i;
    //             break;
    //         }
    //     }

    //     // If no such index found
    //     if (index == -1) {
    //         // Reverse the entire array
    //         reverse(nums.begin(), nums.end());
    //         return;
    //     }

    //     // Find element just greater than nums[index]
    //     for (int i = nums.size() - 1; i > index; i--) {
    //         // Swap the two
    //         if (nums[i] > nums[index]) {
    //             swap(nums[i], nums[index]);
    //             break;
    //         }
    //     }

    //     // Reverse the part after index
    //     reverse(nums.begin() + index + 1, nums.end());
    // }


// Main function
int main() {
    // Input array
    vector<int> nums = {1,3,2};

    // Create object
    

    // Call the function
    nextPermutation(nums);

    // Print result
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
