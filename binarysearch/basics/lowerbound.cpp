#include <bits/stdc++.h>
using namespace std;

int answer(vector<int> &nums, int target){
    int low {};
    int high = (int)nums.size()-1;
    if(target> nums[high]){
        return (int)nums.size();
    }
    while(low<= high){
        if(low == high){
            return low;
        }
        int mid {low+ (high-low)/2};
        if(nums[mid] == target){
            if(nums[mid- 1] == target){
                high = mid - 1;
                continue;
            }
            return mid;
        }else if(nums[mid] < target){
            low = mid +1;
        }else if(nums[mid] > target){
            if(nums[mid - 1] > target){
                high = mid -1;
            }else{
                return mid;
            }
        }
    }
    return (int)nums.size();
}

int main(){
    vector<int> nums {1,3,5,8,15,19};
    cout << nums[answer(nums, 9)];
    return 0;
}
