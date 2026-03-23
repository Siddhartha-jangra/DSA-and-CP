//*******************SIEVE OF ERATOSSPHERE*************************************** */
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>> n;
    vector<bool> isPrime(n+1, 1);
    int ans {};
    for(int i {2};i<n;i++){
        if(isPrime[i]){
            ans++;
            for(int j {i*2};j<n;j +=i)
            {
                isPrime[j]  = 0;
            }
        }
    }
    cout << ans ;
}