#include <iostream>

void wieghtDistribution(int w){
 if(w%2 == 0 && w > 2){
    std::cout << "YES" << std::endl;
 }
 else{
    std::cout << "NO" << std::endl;
 }
}

int main(){
    int w;
    std::cin >> w;
    wieghtDistribution(w);

    return 0;
}