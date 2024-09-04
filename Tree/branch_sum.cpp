#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
    int value;
    Node *left = nullptr;
    Node *right = nullptr;

    // constructor
    Node(int val){
        this->value = val;
    }
};

// helper functon for branchSums
void calculateBranchSums(Node* node, int runningSum, vector<int> &sums) {
    if(node == nullptr) return;
    int newRunningSum = node->value + runningSum;
    if(node->left == nullptr && node->right == nullptr) {
        sums.push_back(newRunningSum);
    }

    calculateBranchSums(node->left, newRunningSum, sums);
    calculateBranchSums(node->right, newRunningSum, sums);

}

void branchSums(Node* root) {
    vector<int> sums;
    calculateBranchSums(root, 0, sums);
    
    for(auto x: sums) {
        cout << x << " ";
    }
    cout << endl;
}

int calculateNodeDepth(Node* node, int depth) {
    if(node == nullptr) return 0;
    return depth + calculateNodeDepth(node->left, depth+1) + calculateNodeDepth(node->right, depth+1);
}

void nodeDepthSum(Node* root) {
    int sum = calculateNodeDepth(root, 0);

    cout << sum << endl;
}

int main() {
    Node* root = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);
    Node* node6 = new Node(6);
    Node* node7 = new Node(7);
    Node* node8 = new Node(8);
    Node* node9 = new Node(9);
    Node* node10 = new Node(10);

    root->left = node2;
    root->right = node3;

    node2->left = node4;
    node2->right = node5;
    node3->left = node6;
    node3->right = node7;

    node4->left = node8;
    node4->right = node9;
    node5->left = node10;

    // branchSums(root);
    // nodeDepthSum(root);

    // cout << root->left->left->right->value << endl;
}