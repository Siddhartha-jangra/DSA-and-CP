#include <iostream>

void dominoCount(int M, int N){
    int area {M*N};
    int count {M*N/2};
    std::cout << count << std::endl;
}

int main(){
    int M{}, N{};
    std::cin >> M;
    std::cin >> N;
    dominoCount(M,N);

    return 0;
}