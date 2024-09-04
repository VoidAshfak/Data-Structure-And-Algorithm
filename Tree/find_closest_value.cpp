/*
i have given at BST and a value. I have to find the closest value to that given value.
*/

// first i have to construct a BST

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *left = nullptr;
    Node *right = nullptr;

    // constructor
    Node(int val)
    {
        this->value = val;
    }
};

class BinarySearchTree
{
public:
    Node *root;

    // tree constructor
    BinarySearchTree()
    {
        this->root = nullptr;
    }

    // insert function

    bool insert_node(int val)
    {
        Node *newNode = new Node(val);

        if (root == nullptr)
        {
            root = newNode;
            return true;
        }

        Node *temp = root;
        while (true)
        {
            if (newNode->value == temp->value)
                return false;

            if (newNode->value < temp->value)
            {
                if (temp->left == nullptr)
                {
                    temp->left = newNode;
                    return true;
                }
                else
                {
                    temp = temp->left;
                }
            }
            else
            {
                if (temp->right == nullptr)
                {
                    temp->right = newNode;
                    return true;
                }
                else
                {
                    temp = temp->right;
                }
            }
        }
    }
};

int findClosest(BinarySearchTree *bst, int target)
{
    int closestValue = bst->root->value;

    Node *temp = bst->root;

    while (temp != nullptr){
        int absDiff = abs(temp->value - target);

        // decide wheather to go left or right
        if (target > temp->value){
            temp = temp->right;
        } else {
            temp = temp->left;
        }

        if(temp != nullptr && (abs(temp->value - target) < absDiff)) {
            closestValue = temp->value;
        }
    }
    return closestValue;
}

int main()
{
    BinarySearchTree *bst = new BinarySearchTree();

    bst->insert_node(10);
    bst->insert_node(5);
    bst->insert_node(15);
    bst->insert_node(2);
    bst->insert_node(6);
    bst->insert_node(13);
    bst->insert_node(22);
    bst->insert_node(14);
    bst->insert_node(1);

    int answer = findClosest(bst, 12);

    cout << answer << endl;
}