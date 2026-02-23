#include <iostream>
#include <vector>
using namespace std;


void memberFnc(){
    vector<int> vec {1,2,3,4,5};
    //iterator
    vector<int>::iterator itr {vec.begin()};

    for(;itr<vec.end(); itr++){
        cout << *itr << " ";
    }

    for(auto i : vec){
        cout << i << " ";
    }

    //begin the iterator from the end 
    auto reverseBegin {vec.rbegin()};
    // the iterator is initiallised with the memory just before the index 0; 
    // in this case just before the memory block that stores 3;
    auto reverseEnd {vec.rend()};

    //this loop will run in reverse and since the iterator itself is reverse there is i++
    for(auto i {reverseBegin}; i < reverseEnd; i++){
        cout << *i<< " ";
    }

    cout << '\n';

    //vec.end and begin both are pointers and begin point at index 0 and end points
    // at the block after the last block.
    //cout << *(vec.end()); 

   
    //cout<< *(vec.begin()); // it requires its parameters in iterators.
    
    vec.erase(vec.begin()+2, vec.end()-1);

    for(auto i : vec){
        cout << i << " ";
    }
    cout << '\n';

    vec.insert(vec.end( )- 2, 7676);
    for(auto i : vec){
        cout << i << " ";
    }
    

}   

int main(){
    memberFnc();
    return 0;
}