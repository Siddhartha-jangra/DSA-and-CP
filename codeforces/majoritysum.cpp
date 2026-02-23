//return a pair int sorted array with a target
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int>& arr, int target){
    int i {};
    int m {sizeof(arr)/sizeof(int)};
    int j {};
    while(i<j){
        if(arr[i]+arr[j] < target){
            i++;
        }
        else if(arr[i]+arr[j] > target){
            j++;
        }
        else{
            return {i,j};
        }

    }
    return {i,j};
}
int main()
{
    vector<int> arr {2,7,11,15};
    int target {18};
    pairSum(arr, target);
}