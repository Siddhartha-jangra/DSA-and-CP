/*
the quick sort has a time complexity of O(nlogn) but in the worst case it has O(n^2) 
the worst case being pivot being the largest and the smallest values.

we take a pivot and move the smaller valuse on one side and the larger on the other
this gives us the correct position (index) for the pivot
then we select one of the half of the array and then do the same process,
each time the new pivot will find its correct place and then eventually it will have completely sorted
*/
#include <iostream>
#include <vector>
using namespace std;

//this one takes the value of the pivot index and use to call partition recursively till the nums is sorted.
void quickSort(vector<int>& nums, int st, int end);
//this gives the correct position of the pivot chosen
int partition(vector<int>& nums, int st, int end);

int main(){
    vector<int> nums {1,4,7,9,8,10,3,2,6,5,13,12,15,14,11};
    quickSort(nums, 0, nums.size()-1);
    for(int i : nums){
        cout << i << " " ;
    }
}

int partition(vector<int>& nums, int st, int end){
    //choses a index
    int pivot {end};
    //makes space before the pivot to put smaller values on left and larger values no right
    int idx {st - 1}; 
    //to bring the smaller terms to the left side of the pivot, we swap the smaller ones into their desired position
    for(int j {st}; j< end;j++){
        if(nums[j] <= nums[pivot]){
            idx++;
            swap(nums[idx], nums[j]);
        }
    }
    // to go the next index of the smaller values and placing the pivot in the correct location.
    idx++;
    swap(nums[idx], nums[pivot]);
    //returning the correct index of the sorted pivot to the next function.
    return idx;
}


void quickSort(vector<int>& nums, int st, int end){
    if(st<end){
        // chose the new pivot (this time is the last element of the part of the array)
        int pividx = partition(nums, st, end);
        //to run the same process on the left part of the array
        quickSort(nums, st, pividx - 1);
        //to run the same process on the right part of the array
        quickSort(nums, pividx +1, end);
    }
}