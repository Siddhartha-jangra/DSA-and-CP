//this is the wrong one the right answer is in the a.cpp file and frankly my mistake is i read the question wrong

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int testCases{};
    cin >> testCases;
    while(testCases){
        int elements{};
        cin >> elements;
        vector<int> nums;
        for(int i{}; i<elements; i++){
            int n{};
            cin >> n;
            nums.push_back(n);
        }
        bool a = false, b= false;
        for (int i {}; i < elements;i++){
            if(nums[i] == 1){
                a = true;
                continue;
            }
            else if(nums[i] == 67){
                b = true;
                continue;
            }
        }
        if(a == true && b == true ){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
        a = false;
        b = false;
        testCases--;
    }
    return 0;
}