#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


class Solution {
public:
    void removeLoop(Node* head) {

        if (head == NULL || head->next == NULL)
            return;

        Node* slow = head;
        Node* fast = head;

        bool cycle = false;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                cycle = true;
                break;
            }
        }

        if (!cycle)
            return;

        slow = head;

        if (slow == fast) {
            while (fast->next != slow)
                fast = fast->next;

            fast->next = NULL;
            return;
        }

        while (slow->next != fast->next) {
            slow = slow->next;
            fast = fast->next;
        }

        fast->next = NULL;
    }
};