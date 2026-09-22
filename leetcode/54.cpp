#include <iostream>
#include <vector>
using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> spiral(vector<vector<int>>& matrix) {
        vector<int> ans;
        int top = 0;
        int bottom = matrix.size() -1 ;
        int left = 0;
        int right = matrix[0].size() - 1;
        
        while(left<=right && top <= bottom){
             
            for(int j = left;j<=right; j++){
                ans.push_back(matrix[top][j]);
            }
            top++;

            for(int i = top; i<= bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;

            if(left<=right){
                for(int j = right; j>= left;j--){
                    ans.push_back(matrix[bottom][j]);
                }
                bottom--;
            }

            if(top<=bottom){
                for(int i = bottom;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
       
        return ans;
    }
};

int main() {
    Solution obj;
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    vector<int> ans = obj.spiral(matrix);
    for(auto v: ans){
        cout << v << " ";
    }
    return 0;
}

