#include <algorithm>
using namespace std;


struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};


class Solution {
private:
    int ans;

    int height(Node* root) {
        if (root == NULL)
            return -1;

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        ans = max(ans, leftHeight + rightHeight + 2);

        return 1 + max(leftHeight, rightHeight);
    }

public:
    int diameter(Node* root) {
        ans= 0;
        height(root);
        return ans;
    }
};