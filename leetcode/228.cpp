/*
in this ques i have to print the consecutive ranges that occur in the array like 1,2,3,4 as 1->4 and if alone 
then 9 as "9"
1. i will initialize three variable i as 0 and j as the next element and a third to keep the track of the 
first element of range.
2. i will iterate through the given array as follow:
    1. i will store the first element in the first range
    2. i will see if the nums[i] = nums[j] +1, if yes then i will increment their value by 1 
    and continue.
    3. else i will push the value of the first value and the last value in the string vector
    if the element is same then i will only push that element.
*/
#include <iostream> 
#include <vector>
#include <string>
using namespace std;

vector<string> summaryRanges(vector<int>& nums) {
    vector<string> ranges;
    int i {}, count = nums[0], j {};
    vector<string> Sranges;

    while(j< nums.size()){

       if(nums[j] == count){
        j++;
        count++;
       }
       else{
        if(j == nums.size() -1){
            if(i == j){
                Sranges.push_back(to_string(nums[j]));
            }
            else{
                Sranges.push_back(to_string(nums[i]) + "->" + to_string(nums[j]));
                break;
            }
        }
        if(i == j){
            Sranges.push_back(to_string(nums[j]));
        }
        else{
            Sranges.push_back(to_string(nums[i]) + "->" + to_string(nums[j-1]));
        }
        i = j;
        count = nums[j];
       }
    }
    return Sranges;
}

int main(){
    vector<int> nums {2,3,5,6,7,9};
    vector<string> Sranges = summaryRanges(nums);
    for(auto  i : Sranges){
        cout << i << " ";
    }
    return 0;
}