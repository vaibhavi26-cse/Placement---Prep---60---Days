#include <iostream>
using namespace std;



class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};


class Solution {
public:
    void mirror(Node* root) {

        if (root == NULL) {
            return;
        }

        // Swap left and right children
        swap(root->left, root->right);

        // Mirror left subtree
        mirror(root->left);

        // Mirror right subtree
        mirror(root->right);
    }
};