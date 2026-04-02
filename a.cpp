#include <bits/stdc++.h>
using namespace std; 

void merge(vector<int> &a, int low,int mid, int high){
    int i {low};
    int j{mid +1};
    vector <int> temp;
    while(i<=mid&&j<=high){
        if(a[i]<= a[j]){
            temp.push_back(a[i]);
            i++;
        }
        else{
            temp.push_back(a[j]);
            j++;
        }
    }
    while(i<= mid){
        temp.push_back(a[i]);
        i++;
    }
    while(j<=high){
        temp.push_back(a[j]);
        j++;
    }
    for(int i {};i<temp.size();i++){
        a[i+low] = temp[i];
    }
}

void mergesort(vector<int> &a,int low, int high){
    if(low <= high){
        int mid = low + (low -high)/2;
        mergesort(a,low, mid);
        mergesort(a,mid+1,high);
        merge(a,low, mid, high);
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    bool ans = 1;
    for(int i {};i<n;i++){
        int b;
        cin >> b;
        a[i] = b;
    }
    int sum {};
    for(int i {0};i<n-1;i++){
        sum += a[i];
        if(sum == a[i+1]){
            ans = 0;
            break;
        }
    }
    if(!ans){
    mergesort(a,0,a.size()-1);
    ans = 1;
    cout << "YES\n";
    for(int i :a){
        cout << i << " " ;
    }
    cout << '\n';
    }
    else{
        cout << "NO\n";
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}