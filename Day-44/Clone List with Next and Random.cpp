#include <iostream>
using namespace std;

// Definition of Node
class Node {
public:
    int data;
    Node* next;
    Node* random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* cloneLinkedList(Node* head) {

        if (head == NULL)
            return NULL;

        // Step 1: Insert cloned nodes after every original node
        Node* curr = head;

        while (curr) {
            Node* clone = new Node(curr->data);
            clone->next = curr->next;
            curr->next = clone;
            curr = clone->next;
        }

        // Step 2: Copy random pointers
        curr = head;

        while (curr) {
            if (curr->random)
                curr->next->random = curr->random->next;

            curr = curr->next->next;
        }

        // Step 3: Separate original and cloned linked lists
        curr = head;
        Node* cloneHead = head->next;
        Node* cloneCurr = cloneHead;

        while (curr) {
            curr->next = cloneCurr->next;
            curr = curr->next;

            if (curr) {
                cloneCurr->next = curr->next;
                cloneCurr = cloneCurr->next;
            }
        }

        return cloneHead;
    }
};

int main() {
    // Driver code can be added here for local testing.
    return 0;
}