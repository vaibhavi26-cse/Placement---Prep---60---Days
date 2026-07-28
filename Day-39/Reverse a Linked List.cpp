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
    Node* reverseList(Node* head) {

        Node* prev = nullptr;
        Node* curr = head;

        while(curr != nullptr) {

            Node* nextNode = curr->next;

            curr->next = prev;

            prev = curr;
            curr = nextNode;
        }

        return prev;
    }
};