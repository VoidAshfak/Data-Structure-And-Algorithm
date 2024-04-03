#include<bits/stdc++.h>
using namespace std;
int main(){

    class Node{
        public:
        int value;
        Node* next;
        Node* prev;

        Node(int value) {
            this->value = value;
            next = nullptr;
            prev = nullptr;
        }
    };


    class DoublyLinkedList{
        private:
        Node* head;
        Node* tail;
        int length;

        public:
        DoublyLinkedList(int value) {
            Node* newNode = new Node(value);
            head = newNode;
            tail = newNode;
            length = 1;
        }

        void printList() {
            Node* temp = head;
            while(temp) {
                cout << temp->value << " => ";
                temp = temp->next;
            }
        }

        void append(int val) {
            Node* newNode = new Node(val);
            if(head == nullptr) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode; // tail = tail->next
            }
            length++;
        }

        void deleteLast() {
            Node* temp = tail;
            if(head == tail){
                head = nullptr;
                tail = nullptr;
            } else {
                tail = tail->prev;
                tail->next = nullptr;               
            }
            delete temp;
        }

        void prepend(int val) {
            Node* newNode = new Node(val);

            if(head == tail) {
                head = newNode;
                tail = newNode;
            } else {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
            length++;
        }

        void deleteFirst() {
            Node* temp = head;
            if(head == tail) {
                head = nullptr;
                tail = nullptr;
            } else {
                head = head->next;
                head->prev = nullptr;
            }

            delete temp;

        }

        //TODO**
        // get()
        // set()
        // insert()
        // delete()

    };

    DoublyLinkedList* mydll = new DoublyLinkedList(4);
    mydll->append(103);
    mydll->append(0);
    mydll->append(9);
    mydll->prepend(1004);
    mydll->deleteLast();
    mydll->printList();



}