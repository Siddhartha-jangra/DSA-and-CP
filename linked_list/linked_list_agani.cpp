#include <iostream>
using namespace std;

class node{
        public:

    int data;
    node* next;
    
    node(int val, node* next_node) : data(val) , next(next_node) {}

};



int main(){

    int n; cin >> n;


    node * head = nullptr;
    node * tail = nullptr;
    while(n--){

        int temp; cin >> temp;
        node * new_node = new node(temp, nullptr);
        if(head == nullptr){
            head = new_node;
            tail = new_node;
        }
        else{
            tail -> next = new_node;
            tail = new_node;
        }

    }
    // node * a = new node(1,nullptr);
    // node *b = new node(2,nullptr);
    // node *c = new node(3, nullptr);
    // node * d = new node(4,nullptr);

    // a-> next = b;
    // b->next = c;
    // c->next = d;
    
    node* current = head;
    while(current != nullptr){
        cout << current->data << " ";
        current = current->next;
    }
     
    return 0;
}