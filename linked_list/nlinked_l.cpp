#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int a){
        data = a;
        next = nullptr;
    }
};

void pushfront(node*& head,int data){
    node* nn = new node(data);
    nn -> next = head;
    head = nn;
}

void pushback(node*& head, int data){
    node* nn = new node(data);

    if(head == nullptr){
        head = nn;
        return;
    }
    node* current = head;
    while(current != nullptr){
        current -> next;
    }

    current -> next = nn;
}

void insert(node*& head,int data,int pos){
    node* nn = new node(data);
    if(pos == 1){
        pushfront(head,data);
        return;
    }
    node *current = new node(data);
    for(int i{1};i<pos-1;i++){
       current= current -> next;
    }
    current -> next = nn -> next;
    nn -> next = current

}
int main(){
    int n; cin >>n;

    node* head = nullptr;
    node* tail = nullptr;
    while(n--){
        int data; cin >> data;
        node* nn = new node(data);
        if(head == nullptr){
            head = nn;
            tail = nn;
        }
        else{
            tail -> next = nn;
            tail = nn;
        }
    }
    node *current = head;
    while(current != nullptr){
        cout << current -> data << endl;
        current = current -> next;
    }
}