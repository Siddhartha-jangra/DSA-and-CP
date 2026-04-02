#include <iostream>
#include <vector>
using namespace std;

int answer(vector<int>&nums,int k){
    int ans{};
    int sum = {};
    int i{};j{};
    while(i<nums.size()&&j<nums.size()){
        if(sum == k){
            ans++;
            j++;
        }
        if()

    }
    return ans;
}

int main(){
    vector <int> nums {1,2,3};
    cout << answer(nums,3);
    return 0;
}

