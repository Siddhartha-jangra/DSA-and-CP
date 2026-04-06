#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    if (matrix.empty()) return ans;

    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;

    // We keep going as long as the boundaries haven't crossed
    while (top <= bottom && left <= right) {
        
        // 1. Move Right across the top row
        for (int j = left; j <= right; j++) {
            ans.push_back(matrix[top][j]);
        }
        top++; // Top row is done, move the boundary down

        // 2. Move Down the right column
        for (int i = top; i <= bottom; i++) {
            ans.push_back(matrix[i][right]);
        }
        right--; // Right column is done, move the boundary left

        // 3. Move Left across the bottom row
        // We must check if top <= bottom because we just incremented top
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                ans.push_back(matrix[bottom][j]);
            }
            bottom--; // Bottom row is done, move the boundary up
        }

        // 4. Move Up the left column
        // We must check if left <= right because we just decremented right
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++; // Left column is done, move the boundary right
        }
    }
    
    return ans;
}

int main() {
    vector<vector<int>> nums = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    vector<int> ans = spiralOrder(nums);
    for (auto i : ans) {
        cout << i << " ";
    }
    return 0;
}