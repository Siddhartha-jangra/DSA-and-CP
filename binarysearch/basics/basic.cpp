#include  <bits/stdc++.h>
using namespace std;

int answer(vector<int> &nums, int target){
    int low{};
    int high = (int)nums.size()-1;
    while(low<=high){   
        int mid = low + (high-low)/2;
        if(nums[mid] == target){
            return mid;
            break;
        }else if(nums[mid] < target){
            low = mid + 1;
            continue;
        }else if(nums[mid] > target){
            high = mid - 1;
            continue;
        }
    }
    return -1;
}

int main(){
    vector<int> nums{-1,0,3,5,9,12};
    int target = 9;
    cout << answer(nums, target);
}