#include <bits/stdc++.h>
using namespace std;
/*

LINEAR SIEVE ALGORITHM (O(n) Complexity)
----------------------------------------
Goal: Find the minimum prime factor (lp[i]) for every number 'i' 
from 2 to n, and maintain a list of all primes found (pr[]).

ALGORITHM LOGIC:
1. INITIALIZATION:
   - Create an array 'lp' of size n+1, filled with 0s.
   - Create an empty list 'pr' to store prime numbers.

2. ITERATION:
   Iterate 'i' from 2 up to n:
   
   A. IF lp[i] == 0:
      - This means 'i' is prime (no smaller factor found yet).
      - Set lp[i] = i.
      - Add 'i' to the prime list pr[].

   B. INNER LOOP (Marking Composites):
      - For every prime 'p' in our list pr[]:
        a. Let x = i * p.
        b. If x > n, break the loop.
        c. Set the minimum prime factor of the composite: lp[x] = p.
        d. CRITICAL STEP: If p == lp[i], break the loop.
           
           WHY BREAK? 
           This ensures that each number is visited exactly once. 
           If p equals the minimum prime factor of i, then for any 
           subsequent prime p' > p, the number (i * p') would have 
           'p' as its true minimum prime factor, not p'. By breaking, 
           we guarantee that lp[x] is always the smallest prime factor.
"""*/

int main(){
    int n; cin >> n;
    vector<int> nums;
    vector<int> lp(n+1);kokok
    for(int i {2};i<n;++i){
        if(lp[i] == 0){
            lp[i] = i;
            nums.push_back(i);
        }
        for(int j{};i*nums[j]<=n;++j){
            lp[i*nums[j]] = nums[j];
            if(nums[j] == lp[i]){
                break;
            }
        }
    }
    return 0;
}
