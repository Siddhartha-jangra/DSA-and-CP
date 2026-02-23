#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// void nextPermutation(vector<int>& nums){
//         int *itr = nums;
//         int firstElement{*itr};
//         int swapele1 {};
//         int swapele2 {};
//         int freq{};
//         int freq2{};
//         for(int i{}; i < nums.size() ; i++){
//             if(*(itr + i) == firstElement + 1){
//                 swapele1 = *(itr + i);
//                 freq = i;
//                 cout << freq << endl;
//             }
//             if(*(itr + i) == firstElement +2){
//                 swapele2 = *(itr + i);
//                 freq2 = i;
//             }
//         }
//         swap(*(itr + freq), *(itr + freq2));

//         sort(nums.begin() + freq + 1, nums.end());  
           
//     }
// int main()
// {
//     vector<int> nums {1,5,2,4,3};
//     nextPermutation(nums);
//     for( auto i : nums){
//         cout << i << " ";
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void a(vector<int> &nums){
vector <int> sortedNums {nums};
sort(sortedNums.rbegin(), sortedNums.rend());
  if(sortedNums == nums){
     sort(nums.begin(), nums.end());
  }
}

int main(){
    vector<int> nums {3,2,1};
    a(nums);
    for(auto i : nums){
        cout << i << " ";
    }
    return 0;
}