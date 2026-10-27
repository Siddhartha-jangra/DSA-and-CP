#include <iostream>
using namespace std;

class node{
    public:
    node* next;
    int data;
    node(int val): data(val), next(NULL){}
};

class stack{
    node* top;
    int count;
    public:
    stack(): top(NULL), count(0){}
    bool isEmpty(){
        return top == NULL;
    }
    bool isFull(){
        return top!= NULL;
    }
    int peek(){
        if(top == NULL){
            cout << "underflow" <<endl;
        }
        return top->data;
    }
    void push(int val){
        node* temp  = new node(val);
        temp -> next  = top;
        top = temp;
        count++;
    }
    int pop(){
        if(top == NULL){
            cout << "Underflow" <<endl;
        }
        node*temp  = top;
        int val = temp->data;
        top = temp ->next;
        count--;
        delete temp;
        return val;
    }
    int size(){
        return count;
    }
};

