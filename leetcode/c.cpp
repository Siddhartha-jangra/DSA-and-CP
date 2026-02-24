#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1 {"11"};
    string s2 {"1"};
    string s3;
    int i {static_cast<int>(s1.length() - 1)};
    int j {static_cast<int>(s2.length() - 1)};
            while(i >= 0 && j >= 0){
        if(s1[i] == '1'&& s2[i] == '1'){
            s3.insert(0,"0");
            i--;
            j--;
            for(int k {i}; i < min(s1.length(),s2.length()); k++){
                if(s1[k] == '0'){s1[k] = '1';break;}
                else if(s2[k] == '0'){
                    s2[k] = '1';
                    break;
                }
            }
        }
        else if(s1[i] == '1'&& s2[i] == '0'){
            s3.insert(0,"1");
            i--;
            j--;
        }
        else if(s1[i] == '0'&& s2[i] == '1'){
            s3.insert(0,"1");
            i--;
            j--;
        }
        else{
            s3.insert(0,"0");
            i--;
            j--;
        }
    }
    cout << s3;
    return 0;
}