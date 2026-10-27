#include <iostream>
using namespace std;

class st{
    int *arr;
    int capacity;
    int top;
    public:
    st(int cap){
        capacity = cap;
        arr = new int[capacity];
        top  = -1;
    }
    bool isEmpty(){
        return top == -1;
    }
    bool isFull(){
        return top == capacity-1;
    }
    int peek(){
        if(top == -1){
            cout << "underflow" << endl;
            return -1;
        }
        return arr[top];
    }
    void push(int val){
        if(top == capacity-1){
            cout << "overflow" << endl;
        }
        arr[++top] = val;
    }
    int pop(){
        if(top == -1){
            cout << "underflow" << endl;
            return -1;
        }
        top--;
        return arr[top+1];
    }
};