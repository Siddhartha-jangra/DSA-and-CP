#include <string>
#include <iostream>
using namespace std;

int strStr(string haystack, string needle) {
    int index1{},index2{};
    while(index1 < haystack.length()){
        if(haystack[index1] == needle[index2]){
            if(index2 == needle.length() - 1){
                return index1 - index2;
            }
            index1++;
            index2++;
            continue;
        }
        else{
            index1 = index1 - index2 + 1 ;        
            index2 = 0;
    }
    
    }
        return -1;

}

int main(){
    string haystack = "mississippi";
    string needle = "issip";
    cout << strStr(haystack, needle);
    
    return 0;
}