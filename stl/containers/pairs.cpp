#include <iostream>
#include <utility> //pair comes under this category.

void Pair(){
    std::pair<int, int> a {1,2};
    std::cout << a.first << " " << a.second << std::endl;//to access individual variable

    //heterogenous data types can also be stored together
    std::pair<int , char > b {5 , 'k'};
    std::cout << b.first << " " << b.second << std::endl;

    //nested pairs as many as we need can be stored
    std::pair <std::pair<int , bool> , char> c {{33, true}, '#'};
    std::cout << c.first.first << " " << c.first.first << " " << c.second << std::endl;

}

int main() 
{
    Pair();

    return 0;
}