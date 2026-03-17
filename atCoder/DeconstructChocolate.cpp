#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int H,W,Q;
    cin >>H >> W >> Q;
    while(Q){
        int q{};
        cin >> q;
        if(q == 1){
            int r{};
            cin >> r;
            cout << r*W << '\n';
            H -= r;
        }
        else if(q == 2){
            int c {};
            cin >> c;
            cout << c*H << '\n';
            W -= c;
        }
        Q--;
    }
}