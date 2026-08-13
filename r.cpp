#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

class Solution {
    long long icount = 0;

    void merge(vector<int>& v, int st, int mid, int end) {
        // Step 1: Count reverse pairs using two pointers
        int j = mid + 1;
        for (int i = st; i <= mid; i++) {
            while (j <= end && (long long)v[i] > 2LL * v[j]) {
                j++;
            }
            icount += (j - (mid + 1));
        }

        // Step 2: Standard Merge Step
        vector<int> temp;
        int i = st;
        j = mid + 1;

        while (i <= mid && j <= end) {
            if (v[i] <= v[j]) {
                temp.push_back(v[i++]);
            } else {
                temp.push_back(v[j++]);
            }
        }

        while (i <= mid) temp.push_back(v[i++]);
        while (j <= end) temp.push_back(v[j++]);

        for (int idx = 0; idx < temp.size(); idx++) {
            v[st + idx] = temp[idx];
        }
    }

    void mergeSort(vector<int>& v, int st, int end) {
        if (st >= end) return;

        int mid = st + (end - st) / 2;
        mergeSort(v, st, mid);
        mergeSort(v, mid + 1, end);
        merge(v, st, mid, end);
    }

public:
    int reversePairs(vector<int>& nums) {
        icount = 0;
        if (nums.empty()) return 0;
        mergeSort(nums, 0, nums.size() - 1);
        return icount;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution sol;
    vector<int> nums = {2, 3, 7, 1, 3, 5};
    cout << sol.reversePairs(nums) << "\n"; // Output: 1 (pair: (7, 3) at indices 2 and 4)

    return 0;
}

