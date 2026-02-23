#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
1.i will take a pointer in the middle of the array, i will check it if it is greater 
than or less than the target
2. i will move the pointer left if target is greate and right if it is smaller
3. when i find the target i will return the index
4. if the target is not in the vector i will find a index where the next index is 
smaller/larger and the previous index is larger/smaller acc to the case. i will return
 the index then.*/
int searchInsert(vector<int>& nums, int target) {
    if(target <= nums[0]){
        return 0;
    }
    else if(target > nums[nums.size() - 1]){
        return nums.size() ;
    }
    else if(target == nums[nums.size() - 1]){
        return nums.size() - 1;
    }
    int i{nums.size()/2};
    while(1<= i <= nums.size() - 1){
        if(nums[i] > target&&target > nums[i-1]||nums[i] == target){
            return i;
            break;
        }
        else if(nums[i] < target&& target< nums[i+1]|| nums[i+1] == target){
            return i+1;
            break;
        }
        nums[i] > target?i--:i++;
    }
    return 0;
}
int main(){
    vector <int> nums {1,3};
    cout << searchInsert(nums, 3);
    return 0;
} 