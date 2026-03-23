#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,h;
        cin >> n>> m >> h;
        vector <int> nums[n], val[n];
        for(int i{};i<n;i++){
            int a;
            cin >> a;
            nums[i] = a;
            val[i] = a;
        }
        while(m--){
            int b,c;
            cin >> b >> c;
            if(nums[b-1] + c <= h){
                nums[b-1] += c;
            } 
            else{
          nums = val;
            }
        }
        for(auto i: nums){
            cout << i << " ";
        }
        cout << '\n';
    }
    return 0;
}