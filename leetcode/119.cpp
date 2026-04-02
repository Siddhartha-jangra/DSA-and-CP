#include <iostream>
#include <vector>
using namespace std;

vector<int> answer(int k){
    vector<vector<int>> p(k+1);
    vector<int> ans ;
    if(k == 0){
        ans.push_back(1);
        return ans;
    }else{
        for(int i {};i<=k;i++){
            for(int j{};j<=i;j++){
                if(j == 0||j== i){
                    p[i].push_back(1);
                    continue;
                }else{
                    p[i].push_back(p[i-1][j-1]+p[i-1][j]);
                }
            }
        }
    }
    for(int i {};i<k;i++){
        ans.push_back(p[k][i]);
    }
    return ans;
}

int main(){
    vector<int> ans {answer(3)};
    for(int i : ans){
        cout << i << " ";
    }
}