#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    // char s1[100], s2[100], s3[100];
    // for(int i{}; i < 100; i++){
    //     cin >> s1[i] >> s2[i];
    
    string s1,s2,s3;
    cin >> s1 >> s2;
    for(int i{};i < s1.size(); i++){
        if(s1.at(i)== s2.at(i)){
            s3.at(i) = '0';
        }
        else{
            s3.at(i) = '1';
        }
    }
    cout << s3;
    return 0;
}