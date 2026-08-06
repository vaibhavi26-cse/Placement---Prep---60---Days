# Day 47 – LRU Cache

## Problem
Design an LRU Cache supporting O(1) get() and put().

## Data Structures Used
- Hash Map
- Doubly Linked List

## Why DLL?
- Delete any node in O(1)
- Move recently used node to front
- Remove least recently used node from tail

## Operations

### get()
- Key not found → -1
- Move node to front
- Return value

### put()
- Update existing node
- Otherwise insert new node
- Remove LRU node if capacity exceeded

## Complexity

Time:
- get() → O(1)
- put() → O(1)

Space:
O(capacity)

## Concepts Learned
- Cache Design
- Doubly Linked List
- Hash Map
- O(1) Design Problems