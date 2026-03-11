/*
1. i will initialize two variable count and maxCount both 0. 
2. i will iterate through the array, as i find the 1s i will count++
3. if i encounter  0, i will use max() function to store the max value of 1s and then turn the count back to 0;
*/

#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int count{};
    int maxCount{INT_MIN};
    for(int i {}; i < nums.size();i++){

        if(nums[i] == 1){
            count++;
            maxCount = max(maxCount, count);

        }
        else{
            count = 0;
        }

    }        
    return maxCount;
}

int main(){
    vector<int> nums {1,1,0,1,1,1};
    cout << findMaxConsecutiveOnes(nums) << endl;
}

