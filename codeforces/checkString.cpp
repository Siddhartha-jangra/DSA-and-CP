#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i{}; i < n; i++){
        char check;
        cin >> check;
        if(check == 'c' || check == 'o' || check == 'd' || check == 'e' || check == 'f'|| check == 'r'|| check == 's'){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}
