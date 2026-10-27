#include <iostream>
#include <vector>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val, node* next_node) : data(val), next(next_node) {}


};

node* convert(vector<int> &v){
    if(v.size() == 0)   return nullptr;
    node* head = new node(v[0],nullptr);
    node* tail = head;
    for(int i = 1;i< v.size();i++){
        node * temp = new node(v[i],nullptr);
        tail->next = temp;
        tail = temp;
    }
    return head;
}
void search(node* head,int target){
    node *current = head;
    int count = 1;
    while(current != nullptr){
        if(current->data == target){
            cout << "element is found at position: " << count << endl;
            return;
        }
        count++;
        current = current->next;
    }
    cout << " element not found" << endl;
}

int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(auto &i: v) cin >> i;
    cout << " target:" << endl;
    int target; cin >> target;
    node* head = convert(v);
    search(head, target);
    // node* current = head;
    // while(current != nullptr){
    //     cout << current -> data << " " ;
    //     current = current->next;
    // }
    return 0;
}