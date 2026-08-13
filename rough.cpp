#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll icount = 0;
#define pb push_back

void merge(vector<int>& v,int st, int mid, int end){
    icount= 0;
    int i {st};
    int j {mid+1};
    vector<int> temp;
    while(i<=mid&&j<=end){
        if(v[i] > v[j]){
            temp.pb(v[j]);
            if(v[i] > 2*v[j])
                icount += mid - i+1; 
            j++;
        }
        else{
            temp.pb(v[i]);
            i++;
        }
    }
    while(i<= mid){
        temp.pb(v[i]);
        i++;
    }
    while(j<=end){
        temp.pb(v[j]);
        j++;
    }
    for(int idx{};idx<temp.size();idx++){
        v[idx+st] = temp[idx];
    }
}

void mergeSort(vector<int>&v,int st,int end){
    if(st<end){
        int mid = st + (end- st )/2;
        mergeSort(v,st,mid);
        mergeSort(v,mid+1,end);
        merge(v,st,mid,end);
    }
}

ll numberOfInversions(vector<int> &v){
    mergeSort(v,0,v.size()-1);
    return icount;

}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {2, 3, 7, 1, 3, 5};
    cout << numberOfInversions(nums);
    
    return 0;
}