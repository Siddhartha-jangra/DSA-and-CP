#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val, node* next_v) : data(val), next(next_v) {}


};

void insertion(node*& head, int pos){
    int value; cin >> value;
    node* n = new node(value, nullptr);
    if(pos == 1){
        n -> next = head;
        head = n;
        return;
    }
    node* cur = head;
    for(int i = 1; i< pos-1;i++){
        cur = cur -> next;
    }
    n->next = cur->next;
    cur->next = n;
}

void deletion(node*&head, int pos){
    if(pos == 1){
        node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    node* cur = head;
    for(int i{1};cur !=nullptr && i<pos-1;i++){
        cur = cur->next;
    }
    if(cur == nullptr||cur->next == nullptr) return;
    node* temp = cur->next;
    cur -> next = cur->next->next;
    delete temp;
}

int main(){
    int n; cin >> n;
    node* head = nullptr;
    node* tail = head;
    while(n--){
        int data; cin >> data;
        node* nn = new node(data,nullptr);
        if(head == nullptr){
            head = nn;
            tail = nn;
        }else{
           tail-> next = nn;              
            tail = nn;
        }

    }

    insertion(head, 5);
    deletion(head, 3);

    node* current = head;
    while(current != nullptr){
        cout << current -> data << " " << endl;
        current = current->next;
    }

}
