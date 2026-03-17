#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){ 
    int N;
    cin >> N;
    int L,R;
    cin >> L >>R;
    vector <char> S;
    for(int i{};i<N;i++){
        char a;
        cin >> a;
        S.push_back(a);
    }
    int count{};
    for(int i {};i< S.size();i++){
        for(int j{i+1};j< S.size();j++){
            int dist = j - i;
            if(dist >= L && dist <= R){
                if(S[i] == S[j]) count++;
            }
            }
        }
    

    cout << count << '\n';

    return 0;
}