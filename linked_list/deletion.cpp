#include <iostream>
using namespace std;

class node{
    public:
    
    int data;
    node* next;
    node(int val, node* n): data(val), next(n){}
    node(int val): data(val), next(nullptr){}
};

void deletion(node*&head, int pos){
    if(head == nullptr||pos<1){
        cout << " not possible \n";
    }
    if(pos == 1){
        node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    node* current = head;
    for(int i = 1;i< pos -1 && current != nullptr;i++){
        current = current -> next;
    }
    if(current == nullptr || current-> next == nullptr){
        cout << "not possible\n";
        return;
    }

    node * temp = current -> next;
    current -> next = current -> next -> next;
    delete temp;

}




int main(){
    cout << "length: " << endl;
    int n; cin >> n;
    node* head = nullptr;
    node* tail  = head;
    while(n--){
        int val; cin >> val;
        if(head == nullptr){
            head = new node(val);
            tail = head;
        }else{
            node* temp = new node(val);
            tail-> next = temp;
            tail = temp;
        }
    }
    cout <<  "index to delete: \n";
    int idx; cin>> idx;
    deletion(head, idx);

    node* current = head;
    while(current != nullptr){
        cout << current-> data << " " << endl;
        current = current -> next;
    }

    return 0;
}
