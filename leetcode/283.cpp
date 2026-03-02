
/*
what i will do is first use two pointers, one from the start and one from the end
i will first see that the start one is zero(if not then the next element) then i will see if the end pointer points
to non zero(if not then to the next element and then continue)
when i see that the start pointer points to 0 and the end pointer points to nonzero i will swap them
else the cycle continues.
*/
#include <iostream>
#include <vector>
using namespace std;



/*
best solution - 
------------------------------------------------------------------------------------------------------------
int j{};
for(int i {}; i < nums.size();i++){
    if(nums[i] != 0){
        swap(nums[i], nums[j]); //will sometimes swap the same element on itself.
        j++;
    }
}
-------------------------------------------------------------------------------------------------------------
*/

void moveZeroes(vector<int>& nums){
    int i{};
    int j{1};
    while(j< nums.size()&& i < nums.size()){
        if(nums[i] != 0){
            i++;
            j = i + 1;
            continue;
        }
        if(nums[j] == 0){
            j++;
            continue;
        }
            swap(nums[i], nums[j]);
            i++;
            j++;
        
    }
}

// this is done by using more memory and creating a new array
// void moveZeroes(vector<int>& nums) {
//     vector<int> arr;
//     int count {};
//     for(int i {};i < nums.size();i++){
//         if(nums[i] != 0){
//             arr.push_back(nums[i]);
//             count++;
//         }
//     }
//     int rest = static_cast<int>(nums.size() - count);
//     while(rest){
//         arr.push_back(0);
//         rest--;
//     }
//     for(int i : arr){
//         cout << i << " ";
//     }
// }

int main ()
{
    vector<int> nums  {4,2,4,0,0,3,0,5,1,0};
    moveZeroes(nums);
    for(int i : nums){
        cout << i << " ";
    }


}
