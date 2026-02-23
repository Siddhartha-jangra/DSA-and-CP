#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int testCases{};
    cin >> testCases;
    for(int j {}; j < testCases;j++){
        int elements{};
        cin >> elements;
           vector <int> hasharr (elements + 1,0);
    vector <int> nums;
    for(int i {}; i < elements; i++){
        int a{};
        cin >> a;
        nums.push_back(a);
        hasharr[nums[i]]++;  

    }
    

    sort(hasharr.begin(),hasharr.end());
    int maxfreq{hasharr[elements]};
    for(int i {elements}; i >= 0;i--){
        maxfreq = max(maxfreq, hasharr[i]*(elements-i+1));
    }
    
    cout << maxfreq << endl;
    }

    return 0;
    
    
}