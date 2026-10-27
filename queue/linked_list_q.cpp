#include <iostream>
using namespace std;

class node{
    public:
    node* next;
    int data;
    node(int val): data(val), next(NULL){}
};

class q{
    node* front;
    node* last;
    int size;
    public: 
    q(){
        front = last = NULL;
        size = 0;
    }

    ~ q(){
        while(!isEmpty){
            dequeue();
        }
        size = 0;
    }
    void enque(int val){
        node* temp = new node(val);
        if(isEmpty()){
            front = temp;
            last = temp;
            size++;
            return;
        }
        else{
            last -> next = temp;
            last = temp;
            size++;
        }
    }

    void dequeue(){
        if(isEmpty()){
            cout << "underflow" << endl;
            return;
        }

        node* temp = front;
        front = front -> next;
        delete temp;
        size--;
    }

    bool isEmpty(){
        return front == NULL;
    }

    int currentSize(){
        return size;
    }

    int peek(){
        if(front == NULL){
            cout << "underflow" << endl;
            return -1;
        }
        return front -> data;
    }
};