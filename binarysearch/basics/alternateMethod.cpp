#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> n{2,3,4,6,8,10,12,14,16};
    int x{10};
    int k{};
    for(int i = n.size()-1;i>=1;i/=2){
        while(i+k<n.size() && n[a+k]<x){
            k += i;
        }
        if(n[a+k] == x){
            break;
        }
    }
    cout << k;
}