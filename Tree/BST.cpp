#include<bits/stdc++.h>
using namespace std;
int main()
{
    class Node{
        public:
        int value;
        Node* left;
        Node* right;

        Node(int value){
            this->value = value;
            left = nullptr;
            right = nullptr;
        }
    };

    class BinarySearchTree{
        private:
        public:
        Node* root;

        BinarySearchTree(){
            root = nullptr;
        }

        bool insert(int value){
            Node* newNode = new Node(value);
            if(root == nullptr){
                root = newNode;
                return true;
            }
            Node* temp = root;
            while(true){
                if(newNode->value == temp->value) return false;
                if(newNode->value < temp->value){
                    if(temp->left == nullptr){
                        temp->left = newNode;
                        return true;
                    } else {
                        temp = temp->left;
                    }
                } else {
                    if(temp->right == nullptr){
                        temp->right = newNode;
                        return true;
                    } else {
                        temp = temp->right;
                    }
                }
            }

        }

        bool contains(int value){

            Node* temp = root;
            while(temp){
                if(value < temp->value){
                    temp = temp->left;
                } else if( value > temp->value){
                    temp = temp->right;
                } else {
                    return true;
                }
            }
            return false;   


            // if(root == nullptr) return false;
            // else{
            //     Node* temp = root;
            //     while(true){
            //         if(temp->value == value) return true;
            //         if(value < temp->value) {
            //             if(temp->left == nullptr) return false;
            //             else {
            //                 temp = temp->left;
            //             }
            //         } else {
            //             if(temp->right == nullptr) return false;
            //             else {
            //                 temp = temp->right;
            //             }
            //         }
            //     }
            // }
        }
    };

    BinarySearchTree* myBST = new BinarySearchTree();

    // myBST->insert(47);
    // myBST->insert(21);
    // myBST->insert(76);
    myBST->insert(18);
    // myBST->insert(27);
    // myBST->insert(52);
    // myBST->insert(82);

    cout << myBST->contains(18);
    // cout << myBST->root->value;


}