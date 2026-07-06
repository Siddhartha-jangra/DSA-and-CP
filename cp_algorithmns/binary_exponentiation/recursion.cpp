#include <iostream>
using namespace std;

long long binPow(int m,int n);
int main(){
    cout << binPow(7,19);
}

long long binPow(int m,int n){
    if(n == 0){
        return 1;
    }
    long long res = binPow(m,n/2);
    if(n%2)
        return res*res*m;
    else
        return res*res;
    
}