/*
the question is to merge two sorted arrays where the first array already has enough space for the rest of the elements of the second arary
what i am going to do is:
1. since both array are already sorted, i can use the logic of merge sort and then combine them together
*/

#include <iostream>
#include <vector>
using namespace std;

void unionarray(vector<int> &nums1,vector<int> &nums2, int m, int n){
    int i{};
    int j{};
    vector<int> temp;
    while(i< m &&j < n){
        if(nums1[i] == nums2[j]){
            temp.push_back(nums1[i]);
            i++;
            temp.push_back(nums2[j]);
            j++;
        }
        else if(nums1[i]< nums2[j]){
            temp.push_back(nums1[i]);
            i++;
        }
        else{
            temp.push_back(nums2[j]);
            j++;
        }
    }
    while(i < m){
        temp.push_back(nums1[i]);
        i++;
    }
    while(j< n){
        temp.push_back(nums2[j]);
        j++;
    }
    for(int idx {}; idx < m+n;idx++){
        nums1[idx] = temp[idx];
    }
}

int main(){
    vector<int> nums1 {1,2,3,0,0,0};
    vector<int> nums2 {2,5,6};
    unionarray(nums1, nums2, 3,3);
    for(int i : nums1){
        cout << i << " ";
    }
        return 0;
}