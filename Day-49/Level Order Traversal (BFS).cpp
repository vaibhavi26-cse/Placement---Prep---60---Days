#include <vector>
#include <queue>
using namespace std;


struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};


class Solution {
public:
    vector<int> levelOrder(Node *root) {
        vector<int> ans;

        if (root == NULL)
            return ans;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node* curr = q.front();
            q.pop();

            ans.push_back(curr->data);

            if (curr->left != NULL)
                q.push(curr->left);

            if (curr->right != NULL)
                q.push(curr->right);
        }

        return ans;
    }
};