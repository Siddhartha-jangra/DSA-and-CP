#include <iostream>
using namespace std;

class node{
    public : 
        int data;
        node *next;

        node(int a){
            data = a;
            next = nullptr;
        }
};

int main(){

    int n; cin >>n;
    node *head = nullptr;
    node *tail = nullptr;
    while(n--){
        int value; cin >> value;

        node *newnode = new node(value):

        if(head == nullptr){
            head = newnode;
            tail = newnode;
        }
        else{
            tail -> next =  newnode;
            tail = nextnode;
        }
    }

    

    // node *head = new node(10);
    // node *second = new node(20);
    // node *tail = new node(30);

    // head -> next = second;
    // second -> next = tail;

     node* current = head;
     while(current!= nullptr){
         cout << current -> data << endl;
         current = current -> next;
     }
}