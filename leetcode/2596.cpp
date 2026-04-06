#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> answer(vector<vector<int>>&grid){
    unordered_map <int,int>m;
    int repeated = -1;
    int missing = -1;
    int n = (int){grid[0].size()};
    int count{1};
    for(int i{};i<n;i++){
        for(int j{};j<n;j++){
            m[grid[i][j]]++;
        }
    }
    for(int i {1};i<n*n;i++){
        if(m.find(i) == m.end()){
            missing = i;
        }else if(m[i] == 2){
            repeated = i;
        }
    }
    return {repeated,missing};
}