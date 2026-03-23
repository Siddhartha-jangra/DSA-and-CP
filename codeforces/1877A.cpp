#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;
        vector <int> nums;
         for(int i{};i< n - 1;i++){
            int a;
            cin >> a;
            nums.push_back(a);
        }
        int ans{};
        for(int i{};i<n-1;i++){
            ans += nums[i];
        }
        cout << - ans << '\n';
        t--;
    }
    return 0;
}