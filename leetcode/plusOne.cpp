#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums {0};
    int n = nums.size() -1;
    while(n>= 0){
        if(n == 0){
            if(nums[0] == 9){
                nums[0] =0;
                nums.insert(nums.begin(),1);
                break;
            }
            else{
                nums[0]++;
                break;
            }
        }
        if(nums[n] == 9){
            nums[n] = 0;
            n--;
        }
        else{
            nums[n]++;
            break;
        }
    }
    for(auto i: nums){
        cout << i << " " ;
    }
return 0;
    
}