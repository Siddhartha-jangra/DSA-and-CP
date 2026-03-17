#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    double D{};
    cin >> D;
    long double pi = 3.141592653589793;
cout << fixed << setprecision(15) << pi * D * D << '\n';

    return 0;

}