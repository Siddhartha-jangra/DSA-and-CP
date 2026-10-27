#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val): data(val), next(nullptr), prev(nullptr){}
};

int main(){

    node* head = new node(2);
    node* body  = new node(4);
    node* tail  = new node(3);

    head -> next = body;
    body -> next = tail;
    body-> prev = head;
    tail-> prev = body;

    node* current = head;
    while(current != nullptr){
        cout << current ->data << " " << endl;
        current  = current-> next;
    }
    cout << endl;
    current = tail;
    while(current != nullptr){
        cout << current -> data<< "  " << endl;
        current = current -> prev;
    }

    return 0;
}