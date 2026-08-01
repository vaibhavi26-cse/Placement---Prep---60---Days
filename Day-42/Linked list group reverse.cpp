#include <iostream>
using namespace std;

/*
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
public:
    Node* reverseKGroup(Node* head, int k) {
        if (head == NULL)
            return NULL;

        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;

        int count = 0;

        // Reverse first k nodes
        while (curr != NULL && count < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        // Reverse remaining groups recursively
        if (next != NULL) {
            head->next = reverseKGroup(next, k);
        }

        return prev;
    }
};