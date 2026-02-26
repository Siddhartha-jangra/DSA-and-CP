#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int> &arr,int st, int end);
void merge(vector<int> &arr, int st, int mid, int end);

int main(){
    vector<int> arr {2,4,6,7,8,5,1,9,11,12,10,3};
    mergeSort(arr, 0, arr.size()- 1);
    for(auto i: arr){
        cout << i << " " ;
    }
    return 0;
}
void mergeSort(vector<int> &arr,int st, int end){

    if(st < end){
        int mid = st + (end - st)/2;
        mergeSort(arr,  st,  mid);
        mergeSort(arr, mid +1, end);
        merge(arr, st,mid,end);
    }
}
void merge(vector<int> &arr, int st, int mid, int end){
    int i {st};
    int j {mid +1};
    vector<int> temp;
    while(i <= mid&&j<= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx {}; idx < temp.size();idx++){
        arr[idx + st] = temp[idx];//because the start of the temp is from the st which can be any index.
    }
}
