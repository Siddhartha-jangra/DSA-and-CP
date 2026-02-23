#include <iostream>
#include <vector>
#include <string>
using namespace std;

int removedString(vector<char>& stones){
    int count{};
    for(auto i = stones.begin() + 1; i != stones.end(); i++){
        if(*i == *(i-1)){
            stones.erase(i);
            count++;
            i--;
        }
    }
    return count;
}
int main(){
    int num{};
    cin >> num;

    vector<char> stones;
    for(int i {}; i < num; i++){
        char val;
        cin >> val;
        stones.push_back(val);
    }

    cout << removedString(stones) << endl;

    

}
