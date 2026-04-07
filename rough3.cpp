#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int, int>> v = {{1,2},{5,5},{3,8}};
    sort(v.begin(),v.end());
    for(auto i: v){
        cout<< i.first << " " << i.second  << '\n'; 
    }   

}