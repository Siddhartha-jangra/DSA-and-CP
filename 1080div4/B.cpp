#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> nums;
        while(n--){
            int a;
            cin >> a;
            nums.push_back(a);
        }
        int maxele{nums[0]};
        for(int i{};i< nums.size();i++){
            maxele = max(nums[i], maxele);
        }
        cout << maxele*nums.size() << '\n';
    }
    return 0;
}