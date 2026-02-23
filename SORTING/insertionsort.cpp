#include <iostream>
#include <vector>
using namespace std;

/*
1. the first element on its own is sorted ; the rest of the array is unsorted so i
will take the first element of the unsorted array i.e. the 2nd element of the whole array as the key.
2. i will take that element and compare it with the previous element
3. if the prev element is greater, i will place the value of the greater element at the index of the prev +1;
e.g. 1352 key = 2, then it will look like this : 1355(prev here is the 2 index)
4. i will then continue doing this untill i find the place where nums[prev] < key
e.g. 1355 -> 1335; then when i find the place i will place the value at it's position -> 1235*/
int main(){
    vector<int> nums {13,46,24,52,20,9};
    for(int i = 1;i< nums.size();i++){
        int key {nums[i]};
        int prev = i-1;
        while(prev >= 0&&nums[prev]>key){
            nums[prev+1] = nums[prev];
            prev--;
        }
        nums[prev+1]=key;
    }
    for(auto i:nums){
        cout << i << " ";
    }
    return 0;
}