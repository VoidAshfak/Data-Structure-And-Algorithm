#include<bits/stdc++.h>
using namespace std;


class Node {
public:
    int value;
    Node* next;
    Node(int value) {
        this->value = value;
        this->next = nullptr;
    }
};

class LinkedList {

public:
    Node* head;
    Node* tail;
    LinkedList(int value) {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }

    ~LinkedList() {

        Node* temp = head;
        while(head) {
            head = head->next;
            delete temp;
            temp = head;
        }
    }

    void append(int value) {
        Node* newNode = new Node(value);
        if(head == nullptr){
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printList() {
        Node* temp = head;
        while(temp) {
            cout << temp->value << " -> ";
            temp = temp->next;
        }
        cout << endl;
    }
};

void remove_duplicates(Node* head) {
    Node* currentNode = head;
    Node* temp = currentNode->next;
    while(currentNode->next != nullptr) {

        if(currentNode->value == temp->value) {
            // edge case
            if(temp->next == nullptr) {
                currentNode->next = nullptr;
                return;
            }
            temp = temp->next;
        } else {
            currentNode->next = temp;
            currentNode = currentNode->next;
            temp = currentNode->next;
        }
    }
}

int main() {
    LinkedList *list = new LinkedList(1);

    list->append(3);
    list->append(4);
    list->append(4);
    list->append(4);
    list->append(5);
    list->append(6);
    list->append(6);

    remove_duplicates(list->head);
    list->printList();
}