#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;
    node* prev;

    node(int val): data(val), next(nullptr), prev(nullptr){}
};

int main(){
    cout << "total: " << endl;
    int n; cin >> n;
    node* head = nullptr;
    node* tail = nullptr;
    while(n--){
        int c; cin >> c;
        node* temp = new node(c);

        if(head == nullptr){
            head = temp;
            tail = temp;
        }else{
            tail -> next = temp;
            temp -> prev = tail;
            tail = temp;
        }
        
    }

    node* current = head;
    while(current != nullptr){
        cout << current-> data << " " << endl;
        current = current -> next;
    }
    current = tail;
    while(current != nullptr){
        cout << current-> data << " " << endl;
        current = current -> prev;
    }
}