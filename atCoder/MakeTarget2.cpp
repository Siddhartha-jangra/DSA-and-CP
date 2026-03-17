#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int   L,R,D,U;
    cin >> L>> R >> D >> U;
    int count{};
    while(U >= D){
        for(int i {L};i <= R;i++){
            if(max(abs(U), abs(i))%2 == 0){
                count++;
            }
        }
        U--;
    }
    cout << count;
}