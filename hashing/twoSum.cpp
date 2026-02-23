//this is wrong it has wrong syntax
#include <iostream>
#include <vector>
using namespace std;

void twoSum(vector<int>& hasharr, int target){
    pair<int, int> p;
    int val {INT_MIN};
    vector<int> sortedarr;

    for (auto &i :  hasharr){
        while(hasharr[i]){
            sortedarr.push_back(i);
            hasharr[i]--;
        }

    }
    int* start = sortedarr.begin();
    int *end = sortedarr.end() - 1;
    while(end>= start){
        if(sortedarr[start] + sortedarr[end] > target){
            end--;
        }
        else if(sortedarr[start] + sortedarr[end] < target){
            start++;
        }
        else{
            cout << sortedarr[end] << " " << sortedarr[begin];
        }

    }
 

}
int main(){
    vector<int> nums;
    for(int i:nums){
        int a;
        cin >> a;
        nums.push_back(a);
    }
    twoSum(nums, 6);
    return 0;
}