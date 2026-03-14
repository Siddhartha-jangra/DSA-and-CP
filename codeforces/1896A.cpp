// aready done on the codeforces.





// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t){
//         vector<int> nums;
//         int n;
//         cin>> n;
//         while(n){
//             int a;
//             cin >> a;
//             nums.push_back(a);
//             n--;
//         }
//         bool ans = 0, chck = 1;
        
//             for(int i{1}; i < nums.size() - 1;i++){
//                 if(nums[0] == 1&&nums[i] > nums[i-1]&&nums[i] > nums[i+1]){

//                     ans = 1;
//                 }
//             }
//             for(int i{};i< nums.size();i++){
//                 if(nums[i] > nums[i+1]){
//                     chck = 0;
//                 }
//             } 
//         if(ans == 1&&chck == 1){
//             cout << "YES\n";
//         }
//         else{
//             cout << "NO\n";
//         }
//         t--;
//     }
//     return 0;
// }