#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t){
        int n,x;
        cin >> n >> x;
        vector<int> nums;
        while(n){
            int a;
            cin >> a;
            nums.push_back(a);
            n--;
        }
        int maxDiff {nums[0] - 0};
        if(nums.size() == 1){
            maxDiff = max(maxDiff, 2*(x - nums[0]));
        }
        else{
            int i {};
            while(i < nums.size() - 1){
                int diff = nums[i+1] - nums[i];
                maxDiff = max(maxDiff, diff);
                i++;
            }
            maxDiff = max(maxDiff, 2*(x - nums[i]));
        }
        cout << maxDiff << '\n';
        t--;
    }
}