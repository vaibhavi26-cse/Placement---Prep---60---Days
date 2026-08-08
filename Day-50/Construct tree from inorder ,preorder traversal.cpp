#include <iostream>
#include<vector>
#include<unordered_map>
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
    int preIndex = 0;
    unordered_map<int, int> inorderIndex;

    Node* solve(vector<int>& inorder,
                vector<int>& preorder,
                int inStart,
                int inEnd) {

        if (inStart > inEnd) {
            return NULL;
        }

        // Preorder gives the root
        int rootValue = preorder[preIndex++];

        Node* root = new Node(rootValue);

        // Find root position in inorder
        int inIndex = inorderIndex[rootValue];

        // Build left subtree
        root->left = solve(inorder, preorder,
                           inStart, inIndex - 1);

        // Build right subtree
        root->right = solve(inorder, preorder,
                            inIndex + 1, inEnd);

        return root;
    }

    Node* buildTree(vector<int>& inorder,
                    vector<int>& preorder) {

        preIndex = 0;
        inorderIndex.clear();

        // Store positions of inorder elements
        for (int i = 0; i < inorder.size(); i++) {
            inorderIndex[inorder[i]] = i;
        }

        return solve(inorder, preorder,
                     0, inorder.size() - 1);
    }
};