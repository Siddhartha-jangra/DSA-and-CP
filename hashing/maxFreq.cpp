#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums;
    for(int i{}; i < n ;i++){
        int a;
        cin >> a;
        nums.push_back(a);
    }
    int maxfreq{};
    int maxele{};
    vector<bool> hasharr(n, false);
    for(int i {};i<n;i++){
        if(hasharr[i]){
            continue;
        }
        int freq{};
        for(int j {};j<n;j++){
            if(nums[i] == nums[j]){
                hasharr[i] = true;
                freq++;
            }
            if(freq > maxfreq){
                maxfreq = freq;
                maxele = nums[i];

            }
            else if(freq == maxfreq){
                maxele = min(maxele, nums[i]);

            }
        }
    }
    cout << maxfreq << " " << maxele << endl;
    return 0;
}