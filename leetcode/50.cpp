#include <iostream>
using namespace std;

double myPow(int x, int n){
    double ans {1};
    long binform {n};
    while(binform > 0){
        if(binform%2 == 1){
            ans *= x;
        }
        x *= x;
        binform /= 2;
    }
    return ans;
}

int main(){
    cout << myPow(4,5);

    return 0;
}