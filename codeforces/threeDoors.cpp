#include <iostream>
using namespace std;
int main(){
    short int testcases{};
    cin >> testcases;
    while(testcases){
        short int key{};
        cin >> key;
        int arr[3];
        for(int i{}; i < 3;i++){
            cin >> arr[i];
        }
        short int freq{};
        short int nextKey{};
        while(arr[key-1] && freq <= 3){
           nextKey = arr[key-1];
           key = nextKey;
            freq++;
        }
        if(freq == 2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        testcases--;
    }

    return 0;

}