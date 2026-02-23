#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums {1,2,3,1,2,5,2,1,3,5,5,3,6};
    sort(nums.begin(), nums.end());
    int i {0};
    while(i < nums.size() - 1){
        
        if(nums[i] == nums[i+1]){
            nums.erase(nums.begin() + i +1);
            if(i == 0){
                continue;
            }
            else{ 
                i--;
            }
        }
        else{
            i++;
        }
    }
    for(auto i : nums){
        cout << i << " ";
    }
    return 0;
}