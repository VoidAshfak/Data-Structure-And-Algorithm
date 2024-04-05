#include<bits/stdc++.h>
using namespace std;
int main()
{
    class Node{
        public:
        int value;
        Node* next;
        
        Node(int value){
            this->value = value;
            next = nullptr;
        }
    };

    class Queue{
        int value;
        Node* first;
        Node* last;
        int length;

        public:
        Queue(int value){
            Node* newNode = new Node(value);
            first = newNode;
            last = newNode;
            length = 1;
        }

        void enqueue(int value){
            Node* newNode = new Node(103);
            if(first == nullptr && last == nullptr){
                first = newNode;
                last = newNode;
            } else {
                first->next =  newNode;
                last = newNode;
            }
            length++;
        }

        int dequeue(){
            if(first == nullptr && last == nullptr) return INT_MIN;
            Node* temp = first;
            int dequeuedValue = first->value;
            if(length == 1){
                first = nullptr;
                last = nullptr;
            } else {
                first = first->next;
            }
            delete temp;
            length--;
            return dequeuedValue;
        }


    };

    Queue* myQueue = new Queue(55);
    myQueue->enqueue(150);
    myQueue->enqueue(19);

    cout << myQueue->dequeue() << endl;
}