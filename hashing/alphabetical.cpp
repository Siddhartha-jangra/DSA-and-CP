#include <iostream>
using namespace std;


int frqncy(char ch){
  int index {ch - 'a'};
 // cout << index;
  return index;  
}
int main(){
    int n{};
    cin>>n;
    char arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int hasharr[26] = {0}; //the hashmap should always be instantised with 0.
    for(int i{};i<n;i++){
       // cout << (arr[i] - 'a');
        hasharr[arr[i] - 'a']++;
    }
    char ch;
    cin>> ch;
   // cout << ch;
   cout << hasharr[frqncy(ch)];


    return 0;

}