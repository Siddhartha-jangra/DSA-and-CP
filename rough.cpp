#include <iostream>
#include <vector>
using namespace std;

//bubble sort
 //void bubbleSort(vector<int> &nums){
//     int n = nums.size() - 1;//this is important.
//     while(n >=0){
//         for(int i{}; i<n;i++){
//             if(nums[i] > nums[i+1]){
//                 swap(nums[i], nums[i+1]);
//             }
//         }
//         n--;
//     }
// }

// void selectionSort(vector<int> &nums){
//     for(int i {}; i < nums.size();i++){
//         int minele = i;
//         for(int j{i+1}; j< nums.size();j++){
//             if(nums[j] < nums[minele]){
//                 minele = j;
//             }
//         }
//         swap(nums[minele],nums[i] );
//     }
// }
void insertionSort(vector<int> &nums){
    for(int i {1}; i < nums.size(); i++){
        int prev = i - 1;
        int curr = nums[i];
        while(prev >= 0&& nums[prev] > curr){
            nums[prev + 1] = nums[prev];
            prev--;
        }
        nums[prev + 1] = curr;
    }
}
int main(){
    vector <int> nums{13,46,24,52,20,9};
  //  bubbleSort(nums);
  //selectionSort(nums);
  insertionSort(nums);
    for(auto i: nums){
        cout << i << " ";
    }
}