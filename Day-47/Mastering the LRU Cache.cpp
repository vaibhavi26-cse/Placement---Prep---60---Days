#include <iostream>
#include<unordered_map>
using namespace std;

class Node {
public:
    int key, value;
    Node *prev, *next;

    Node(int k, int v) {
        key = k;
        value = v;
        prev = next = NULL;
    }
};

class LRUCache {
    unordered_map<int, Node*> mp;

    Node* head;
    Node* tail;

    int capacity;

    void deleteNode(Node* node) {
        Node* previous = node->prev;
        Node* forward = node->next;

        previous->next = forward;
        forward->prev = previous;
    }

    void insertAfterHead(Node* node) {
        Node* temp = head->next;

        head->next = node;
        node->prev = head;

        node->next = temp;
        temp->prev = node;
    }

public:

    LRUCache(int cap) {
        capacity = cap;

        head = new Node(-1, -1);
        tail = new Node(-1, -1);

        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {

        if (mp.find(key) == mp.end())
            return -1;

        Node* node = mp[key];

        deleteNode(node);
        insertAfterHead(node);

        return node->value;
    }

    void put(int key, int value) {

        if (mp.find(key) != mp.end()) {

            Node* node = mp[key];
            node->value = value;

            deleteNode(node);
            insertAfterHead(node);

            return;
        }

        if (mp.size() == capacity) {

            Node* lru = tail->prev;

            deleteNode(lru);

            mp.erase(lru->key);

            delete lru;
        }

        Node* node = new Node(key, value);

        insertAfterHead(node);

        mp[key] = node;
    }
};