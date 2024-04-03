#include<bits/stdc++.h>
using namespace std;
int main() {
    class Node {
        public:
        int value;
        Node* next;

        Node(int value) {
            this->value = value;
            next = nullptr;
        }
    };

    class LinkedList {
        private:
        Node* head;
        Node* tail;
        int length;

        public:
        LinkedList(int value) {
            Node* newNode = new Node(value);
            head = newNode;
            tail = newNode;
            length = 1;
        }

        ~LinkedList() {

            Node* temp = head;
            while(head) {
                head = head->next;
                delete temp;
                temp = head;
            }
        }

        void printList() {
            Node* temp = head;
            while(temp) {
                cout << temp->value << " " << endl;
                temp = temp->next;
            }
            cout << head->next->value;
        }

        void getHead() {
            cout << "Head: " << head->value << endl;
        }

        void getTail() {
            cout << "Tail: " << tail->value << endl;
        }

        void getLength() {
            cout << "Length: " << this->length <<endl;
        }

        void append(int value) {

            Node* newNode = new Node(value);
            if(length == 0){
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
            length++;
        }

        void removeLast() {
            if(length == 0) {
                return;
            } else if(length == 1) {
                Node* temp = head;
                head = nullptr;
                tail = nullptr;
                length = 0;
                delete temp;
            } else {
                Node* temp = head;
                Node* pre = head;
                while(temp->next) {
                    pre = temp;
                    temp = temp->next;
                }
                tail = pre;
                tail->next = nullptr;
                length--;
                delete temp;
            }
        }

        void prepend(int value) {
            Node* newNode = new Node(value);
            if(length == 0) {
                head = newNode;
                tail = newNode;
            } else {
                newNode->next = head;
                head = newNode;
            }

            length++;
        }

        void deleteFirst() {
            if(length == 0) return;
            Node* temp = head;
            if(length ==1) {
                head = nullptr;
                tail = nullptr;
            } else {                                            // 4 => 5 => 6 => 7 => 8
                head = head->next;
            }
            delete temp;
            length--;
        }

        void deleteLast() {
            Node* temp = head;
            if(length == 0) return;
            if(length == 1) {
                head = nullptr;
                tail = nullptr;
            } else {
                for(int i = 0; i < length-2; i++) {
                    temp = temp->next;
                }
                tail = temp;
                tail->next = nullptr;
                temp = temp->next;
            }
            delete temp;
            length--;
        }

        Node* get(int index) {
            if(index > length-1 || index < 0) {
                return nullptr;
            }
            Node* temp = head;
            for(int i = 0; i < index; i++) {
                temp = temp->next;
            }

            return temp;
        }

        bool set(int index, int value) {
            Node* temp = get(index);

            if(temp) {
                temp->value = value;
                return true;
            } else {
                return false;
            }
        }

        bool insert(int index, int value) {
            if(index < 0 || index > length) {
                return false;
            }
            if(index == 0) {
                prepend(value);
                return true;
            }
            if(index == length) {
                append(value);
                return true;
            }
            Node* newNode = new Node(value);
            Node* temp = get(index-1);

            newNode->next = temp->next;
            temp->next = newNode;
            length++;
            return true;

        }

        void deleteNode(int index) {
            if(index < 0 || index >= length) return;
            if(index == 0) return deleteFirst();
            if(index == length-1) return deleteLast();

            Node* prev = get(index-1);
            Node* temp = prev->next;

            prev->next = temp->next;
            delete temp;
            length--;
        }

        void reverse() {
            Node* temp = head;
            head = tail;
            tail = temp;

            Node* before = nullptr;
            Node* after = temp->next;

            for(int i = 0; i < length; i++) {
                after = temp->next;
                temp->next = before;
                before = temp;
                temp = after;
            }
        }

    };

    LinkedList* myLinkedList = new LinkedList(11);
    myLinkedList->append(3);
    myLinkedList->append(23);
    myLinkedList->append(7);
    myLinkedList->append(4);

    // bool isTrue = myLinkedList->insert(2, 33);

    myLinkedList->printList();

    // myLinkedList->reverse();

    // myLinkedList->printList();


}