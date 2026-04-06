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
                low = mid +1;
                continue;
            }
            return mid;
        }else if(nums[mid] > x){
            
        }
    }
}