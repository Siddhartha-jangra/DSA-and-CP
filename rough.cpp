#include <iostream>

int main() {
    int array[5] = {10, 20, 30, 40, 50};
    bool condition1 = true;

    // Because condition1 is true, array[-1] is safely skipped at runtime
    if (condition1 || array[-1] == 0) {
        std::cout << "This prints safely without crashing!" << std::endl;
    }

    return 0;
}
