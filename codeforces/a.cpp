#include <iostream>
#include <vector>
using namespace std;

int main() {
    int testCases;
    if (!(cin >> testCases)) return 0;
    
    while (testCases--) {
        int n;
        cin >> n;
        bool found67 = false;
        
        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            if (val == 67) {
                found67 = true;
            }
        }
        
        if (found67) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}