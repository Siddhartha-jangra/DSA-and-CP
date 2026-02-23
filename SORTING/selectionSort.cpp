#include <iostream>
#include <vector>
using namespacd std;

/*what ill do is fisrt i will find the minimum element in the array and swap it
 with the first element then i will find the minimum element in the remaining array
 and swap it with the second elementand so on
*/

void selectionSort(vector<int>& nums){
    for(int i {}; i < nums.size(); i++){
        int minIndex = i;
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[j] < nums[minIndex]){
                minIndex = j;
            }
        }
        swap(nums[i], nums[minIndex]);
    }
}

int main(){
    vector<int> nums {5,2,4,6,1,3};
    selectionSort(nums);
    for(auto i : nums){
        cout << i << " ";
    }
    return 0;
}