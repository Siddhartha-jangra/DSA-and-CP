#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    vector<string> strs;
    strs.push_back("flower");
    strs.push_back("flair");
    strs.push_back("fleet");
    string ans;
    // int count {};
    // for(int i {1}; i < strs.size();i++){
    //     for(int j{};j < str[i].length();j++){
    //         if(strs[0][j] == strs[i][j]){
    //             count++;
    //         }
    //     }
    //     if(cout == strs.size()-1){
    //         ans.push_back(strs[0][j]);
    //     }
    // }
    /*1.we will first sort the string vector in lexicographical method, t
    2. this will give us the first and the last string that will 
        have all the common prefix in the whole vector
    3. the loop will run until the shorter of the two strings
    4. the prefix will be stored in the ans string
    */
    sort(strs.begin(), strs.end());
    for(int i {}; i < min(strs[0].length(),strs[strs.size()-1].length());i++){
        if(strs[0][i] == strs[strs.size()-1][i]){
           ans += strs[0][i];
        }
    }
    cout << ans << endl;
    

    return 0;

    
}
