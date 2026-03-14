#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    
}

int main(){
    vector<int> nums{3,1,-2,-5,2,-4};
    vector<int> ans = rearrangeArray(nums);
    for(int i : ans){
        cout << i << " ";
    }
    return 0;
}