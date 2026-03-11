/*
i will first sort the array given and then since the numbers are in linear sequence is natural numbers like 1,2,3,4.....
2. will then check if the next number in the iteration is not equal to the last element + 1.
3. i will then return the said last element + 1.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(), nums.end());//this is O(nlogn)
        // for(int i{};i < nums.size()-1;i++){
        //     if(nums[i+1] != nums[i] + 1){
        //         return nums[i] + 1;

        //     }
        // }
        // if(nums[0] == 1){
        //     return 0;
        // }
        // return nums.size();
        int n {nums.size()};
        int sum = n*(n+1)/2;
        int sum1{};
        for(int i {}; i< n;i++){
            sum1 += nums[i];
        }
        return sum - sum1;
    }

int main(){
    vector<int> nums {1,2};
    cout << missingNumber(nums) ;
    return 0;
}