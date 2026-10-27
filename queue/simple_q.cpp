// #include <iostream>
// using namespace std;

// class q{
//     int *arr;
//     int capacity;
//     int size;
//     public:
//     q(int cap){
//         arr = new int[cap];
//          capacity = cap;
//          size = -1;
//     }
    
//     int peek(){
//         if(size == -1){
//             cout << "underflow" << endl;
//             return -1;
//         }
//         return arr[0];
//     }

//     bool isEmpty(){
//         return size == -1;
//     }

//     bool isFull(){
//         return size != -1;
//     }

//     void enqueue(int val){
//         if(size == capacity-1){
//             cout << "overflow" << endl;
//         }
//         arr[++size] == val;
//     }

//     int dequeue(){
//         if(size == -1){
//             cout << "underflow" << endl;
//             return -1;
//         }
//         int temp = arr[0];
        
//         for(int i{1};i<size;i++){
//             arr[i-1] = arr[i];
//         }
//         size--;
//         return temp;   
//     }


// }


#include <iostream>
using namespace std;

class q {
    int *arr;
    int capacity;
    int size; // Represents the current number of elements in the queue

public:
    q(int cap) {
        arr = new int[cap];
        capacity = cap;
        size = 0; // Start with 0 elements
    }

    // Free dynamically allocated memory
    ~q() {
        delete[] arr;
    }
    
    int peek() {
        if (isEmpty()) {
            cout << "underflow" << endl;
            return -1;
        }
        return arr[0];
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }

    void enqueue(int val) {
        if (isFull()) {
            cout << "overflow" << endl;
            return; // Stop execution here
        }
        arr[size] = val; // Place at the current size index
        size++;          // Increment total elements
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "underflow" << endl;
            return -1;
        }
        int temp = arr[0];
        
        // Shift all elements to the left by 1 position
        for (int i = 1; i < size; i++) {
            arr[i - 1] = arr[i];
        }
        size--; // Reduce element count
        return temp;   
    }
};

int main() {
    q queue(3);
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    cout << queue.dequeue() << endl; // Prints 10
    cout << queue.peek() << endl;    // Prints 20
    return 0;
}
