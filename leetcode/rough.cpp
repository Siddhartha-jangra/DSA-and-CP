/*
here i can not use the erase and put method where i just remove the element from the front or end and then put it back
end ot front respectively.
what i need to do in this question as i already so it,
first rotate n-k elements
then the rest of the elements and then 
the whole array itself
*/

#include <iostream>
#include <vector>
using namespace std;


void rotate(vector<int>& nums, int k) {
    if(k> nums.size()){
        k = k%nums.size();
    }
    int st {};
    int end = nums.size() -1;
    int mid = end - k;
    while(st < mid){
        swap(nums[st], nums[mid]);
        st++;
        mid--;
    }
    mid = end - k + 1;
    while(mid < end){
        swap(nums[mid], nums[end]);
        mid++;
        end--;
    }
    end = nums.size() -1;
    st = 0;
    while(st< end){
        swap(nums[st], nums[end]);
        st++;
        end--;
    }
}

int main(){
    vector<int> nums {1,2};
      int k = 3;
    rotate(nums, k);
    for(int i : nums){
        cout << i << " " ;
    }
    return 0;
}