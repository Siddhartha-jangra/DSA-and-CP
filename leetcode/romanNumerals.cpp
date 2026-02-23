#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string s {"LVIII"};
    vector<int> values;
    for(int i{}; i< s.length();i++){
        if(s[i] == 'C'){
            values.push_back(100);
        }
        else if(s[i] == 'M'){
            values.push_back(1000);
        }
        else if(s[i] ==  'D'){
            values.push_back(500);
        }
        else if(s[i] ==  'X'){
            values.push_back(10);
        }
        else if(s[i] == 'I'){
            values.push_back(1);
        }
        else if(s[i] == 'V'){
            values.push_back(5);
        }
        else if(s[i] == 'L'){
            values.push_back(50);
        }
    }
    
     int sum = 0;
     for(int j {}; j< values.size(); j++){
        if(j == values.size()-1){
            sum += values[j];
            break;
        }
        if(values[j] <values[j+1]){
            sum -= values[j];
        }
        else if(values[j] >= values[j+1]){
            sum += values[j];
        }
     }
     cout << sum;
     return 0;
}