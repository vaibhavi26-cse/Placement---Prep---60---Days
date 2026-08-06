# Day 45 – Cycle Detection in Linked List

## Problems Solved
1. Detect Loop in Linked List
2. First Node of Loop in Linked List

---

## Problem 1: Detect Loop

### Approach
- Use Floyd's Cycle Detection Algorithm (Tortoise and Hare).
- Move:
  - Slow pointer → 1 step
  - Fast pointer → 2 steps
- If both pointers meet, a loop exists.
- Otherwise, no loop is present.

### Time Complexity
O(N)

### Space Complexity
O(1)

---

## Problem 2: First Node of Loop

### Approach
- Detect the loop using Floyd's Algorithm.
- After meeting:
  - Move one pointer back to the head.
  - Move both pointers one step at a time.
- The point where they meet again is the starting node of the loop.

### Time Complexity
O(N)

### Space Complexity
O(1)

---

## Concepts Learned

- Floyd's Cycle Detection Algorithm
- Fast & Slow Pointer Technique
- Cycle Detection
- Finding the Starting Node of a Cycle
- Pointer Manipulation
- Linked List Traversal