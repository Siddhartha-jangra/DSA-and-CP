#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val): data(val), next(nullptr), prev(nullptr){}
};

void deletion(node*& head, int val){
        if(head == nullptr) return;

        node * current = head;
        while(){};
}

int main(){
    cout << " length: \n";
    int n; cin >> n;
    cout << "what to remove: \n";
    int a; cin >> a;

    node* head = nullptr;
    node* tail = head;

    while(n--){
        int val; cin >> val;
        node* temp = new node(val);
        if(head == nullptr){
            head = temp;
            tail = temp;
        }else{
            tail-> next = temp;
            temp -> prev = tail;
            tail = tail;
        }
    }

    node* current = head;
    while(current  != nullptr){
        cout << current ->next << " " << endl;
        current = current -> next;
    }
}