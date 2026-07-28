#include <iostream>
using namespace std;

// Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
class Solution {
  public:
    Node* rotate(Node* head, int k) {

        if(head == nullptr || head->next == nullptr || k == 0)
            return head;

        Node* tail = head;
        int len = 1;

        while(tail->next != nullptr) {
            tail = tail->next;
            len++;
        }

        k = k % len;

        if(k == 0)
            return head;

        // Make circular
        tail->next = head;

        // Move to kth node
        Node* newTail = head;

        for(int i = 1; i < k; i++) {
            newTail = newTail->next;
        }

        // New head will be next node
        Node* newHead = newTail->next;

        // Break circular link
        newTail->next = nullptr;

        return newHead;
    }
};