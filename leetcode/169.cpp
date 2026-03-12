/*
i think moore's voting algo will apply here, i will store the value if the element and then count++ if the element is the same and count-- 
if it is not and then i will see for the value for which in the end the count remains positive.
*/
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &nums){
    int count{}; int ele{nums[0]};
    for(int i {};i < nums.size();i++){
        if(ele == nums[i]){
            count++;
        }
        else{count--;}
        if(count < 0){
            ele = nums[i];
            count++;
        }
    }
    return ele;
}

int main(){
    vector <int> nums {10,9,9,9,10};
    cout << majorityElement(nums);
    return 0;
}