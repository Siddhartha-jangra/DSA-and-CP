#include <iostream>
#include <vector>
using namespace std;

int answer(vector<vector<int>> &nums){
    int i{};
    int j{};
    int sum{};
    while(i<nums.size()){
        sum += nums[i][j];
        i++;
        j++;
    }
    j = 0;
    i--;
    while(j<nums[0].size()){
        if(nums[0].size()%2 != 1){
            sum += nums[i][j];
            j++;
            i--;
        }else{
            if(i == j){
                i--;
                j++;
                continue;
            }else{
                sum += nums[i][j];
                i--;
                j++;
            }
        }
    }
    return sum;
}

int main(){
    vector<vector<int>> nums {{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
    cout << answer(nums);
    return 0;
}