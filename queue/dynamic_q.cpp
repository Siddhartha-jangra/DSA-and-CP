#include <iostream>
#include <vector>
using namespace std;

class q{
    vector<int> v;
    int front;
    public:
    q(){
        front = 0;
    }
    int peek(){
        if(isEmpty()){
            cout << "underflow" << endl;
            return -1;
        }
        return v[0];
    }

    bool isEmpty(){
        return front == v.size();
    }

    int size(){
        return v.size();
    }

    void enqueue(int val){
        v.push_back(val);
    }

    int dequeue(){
        if(isEmpty){
            cout << "underflow" << endl;
            return -1;
        }

        front++;
    }

};