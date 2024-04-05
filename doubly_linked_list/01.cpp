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
            cout << endl;
            Node* temp = head;
            while(temp) {
                cout << temp->value << " -> ";
                temp = temp->next;
            }
            cout << endl;
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

        Node* get(int index){
            if(index < 0 || index >= length) return nullptr;
            Node* temp = head;
            if(index == length/2){
                for(int i = 0; i < index; i++){
                    temp = temp->next;
                }
            } else {
                temp = tail;
                for(int i = length-1; i > index; i--){
                    temp = temp->prev;
                }
            }
            return temp;
        }

        bool set(int index, int value){
            if(index < 0 || index >= length) return false;

            Node* temp = head;
            if(index == length/2){
                for(int i = 0; i < index; i++){
                    temp = temp->next;
                }
            } else {
                temp = tail;
                for(int i = length-1; i > index; i--){
                    temp = temp->prev;
                }
            }

            temp->value = value;
            return true;

        }


        bool insert(int index, int value){
            if(index < 0 || index > length) return false;
            Node* newNode = new Node(value);
            if(index == 0){
                // option 2: prepend
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
                length++;
                return true;
            }
            if(index == length) {
                // option 2: append
                newNode->prev = tail;
                tail->next = newNode;
                tail = newNode;
                length++;
                return true;
            }

            Node* before = get(index-1);
            Node* after = before->next;

            newNode->prev = before;
            newNode->next = after;
            before->next = newNode;
            after->prev = newNode;

            length++;
            return true;
        }


        void deleteNode(int index){
            if(index < 0 || index >= length) return;
            if(index == 0) return deleteFirst();
            if(index == length-1) return deleteLast();

            Node* temp = get(index);
            temp->next->prev = temp->prev;
            temp->prev->next = temp->next;
            delete temp;
            length--;
            return;
        }


    };

    DoublyLinkedList* mydll = new DoublyLinkedList(4);
    mydll->append(103);
    mydll->append(0);
    mydll->append(9);
    // mydll->prepend(1004);
    mydll->printList();
    mydll->insert(0, 104);
    mydll->insert(6, 100);
    mydll->printList();
    mydll->deleteNode(0);
    mydll->printList();
}