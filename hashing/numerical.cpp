#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string, int> m;
    int num{};
    cin>> num;
    for(int i {}; i < num;i++){
        string s;
        cin >> s;
        m[s]++;//why do we do this?
    }
    
}