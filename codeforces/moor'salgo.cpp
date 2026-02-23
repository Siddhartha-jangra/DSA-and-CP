#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums;
    int n;
    cin >> n;
for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        nums.push_back(a);
    }
    // for(int i{}; i < n; i++){
    //     int freq{};
    //     for(int j{}; j< n; j++){
    //         if(nums[i] == nums[j]){
    //             freq++;
    //         }
    //     }
    //             if(freq > n/2){
    //         cout << nums[i];
    //     }

    // }

    //this is the more optimal solution by using sorting
    // sort(nums.begin(), nums.end());//this will sort the entire array
    // int freq{0};
    // for(int i{}; i < n; i++){
    //     if(nums[i] == nums[i+1]){
    //         freq++;
    //     }
    //     else{
    //         if(freq > n/2){
    //             cout << nums[i];
    //         }
    //         freq = 0;
    //     }
    // }

    //moore's algorithm 
    int freq {0}, ans {};
    for(int i{}; i < n; i++){

        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout << ans;
    return 0;
}