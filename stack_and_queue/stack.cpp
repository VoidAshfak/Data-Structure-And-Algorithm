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

    class Stack{
        private:
        Node* top;
        int height;

        public:
        Stack(int value){
            Node* newNode = new Node(value);
            top = newNode;
            height = 1;
        }

        void printStack(){
            Node* temp = top;
            while(temp){
                cout << temp->value << endl;
                temp = temp->next;
            }
        }

        void push(int value){
            Node* newItem = new Node(value);
            newItem->next = top;
            top = newItem;
            height++;
        }

        int pop(){
            Node* temp = top;
            if(top == nullptr){
                return INT_MIN;
            } else{
                int item = top->value;
                top = top->next;
                delete temp;
                height--;
                return item;
            }
            
        }
    };


    Stack* stack = new Stack(1);
    stack->push(2);
    stack->printStack();

}