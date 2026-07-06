#include <iostream>
using namespace std;

long long binPow(int a,int b);
int main(){
    cout << binPow(7,19);
}

// long long binPow(int a , int b){
//     long long res = 1;
//     while(b>0){
//         if(b&1)
//             res *= a;
//         a *= a;
//         b >>= 1;
//     }
//     return res;
// }

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}