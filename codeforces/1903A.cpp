/*
if the value if k is more than two than it also carry a 2 and then we can use any kind of sorting like bubble sort etc
so it will always be yes if it is more than one
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t {};
    cin>> t;
    while(t){
        int n,k;
        cin >> n >> k;
        int count;
        vector <int> nums;
        while(n){
            int a;
            cin >> a;
            nums.push_back(a);
            n--;
        }
        for(int i {};i < nums.size() -1;i++){
            if(nums[i] <= nums[i+1]){
                count++;
            }
        }

        if(k > 1){
            cout << "yes\n";
        }
        else{
            if(count == nums.size() - 1){
                cout << "yes\n";
            }
            else{
                cout << "no\n";
            }
        }
        count = 0;
        t--;
    }
    return 0;
}
