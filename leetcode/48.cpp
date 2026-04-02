#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<vector<int>> &matrix){
    int q {};
    for(int i{};i<matrix.size();i++){
        for(int j{q};j<matrix[i].size();j++){
            swap(matrix[i][j],matrix[j][i]);
        }
        q++;
    }
    for(int i{};i<matrix.size();i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}
int main(){
    vector<vector<int>> matrix {{1,2,3},{4,5,6},{7,8,9}};
    rotate(matrix);
    for(int i{};i<matrix.size();i++){
        for(int j{};j<matrix[i].size();j++){
            cout << matrix[i][j]<< " "; 
        }
        cout << '\n';
    }

}