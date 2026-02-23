#include <iostream>
#include <vector>
using namespace std;
/*
1. i will take the first element and then compare it with the next element and swap it if the 
next element is smaller
2. i will run the loop on this process, this will then bring the biggest element to the end
3. i will the repeat the process and leave the last element every time
*/
int main(){
    vector<int> nums {13,46,24,52,20,9};
    int sortedElements = nums.size() - 1;
    while(sortedElements){
    for(int i {}; i< sortedElements; i++){
        if(nums[i] > nums[i+1]){
            swap(nums[i], nums[i+1]);
        }
    }
    sortedElements--;}
    for(auto i: nums){
        cout << i << " ";
    }
    return 0;
}