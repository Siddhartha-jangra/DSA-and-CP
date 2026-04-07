#include <bits/stdc++.h>
using namespace std;

int answer(vector<int> &nums,int x){
    int low{};
    int high = (int)nums.size()-1;
    if(x > nums[high]){
        return (int)nums.size();
    }
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid] == x){
            if(nums[mid+1] == x){
                high = mid +1;
                continue;
            }
            return mid;
        }else if(nums[mid] > x){
            high = mid -1;
        }else if(nums[mid ] < x){
            if(nums[mid+1] < x){
                low = mid +1;
                continue;
            }else{
                return mid;
            }
        }
    }
    return 0;
}

int main(){
    vector<int> nums = {1,3,5,8,15,19};
    cout << nums[answer(nums,9)];
}