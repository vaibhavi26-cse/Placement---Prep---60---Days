# Day 48 - Linked List Revision Notes

## Objective

Revise all important Linked List concepts and patterns covered during the Linked List section of the GFG 160 DSA Sheet.

---

# Core Concepts

## 1. Types of Linked Lists

* Singly Linked List
* Doubly Linked List
* Circular Linked List
* Circular Doubly Linked List

---

## 2. Common Operations

### Traversal

* Start from head.
* Visit each node until `NULL`.

**Time Complexity:** O(n)

---

### Insertion

* At Beginning
* At End
* At Given Position

Time Complexity:

* Beginning → O(1)
* End → O(n) (O(1) if tail pointer exists)
* Position → O(n)

---

### Deletion

* Delete Head
* Delete Tail
* Delete Node by Position

Time Complexity:

* Head → O(1)
* Tail → O(n)
* Position → O(n)

---

# Important Pointer Techniques

## Fast and Slow Pointer

Uses:

* Find Middle Node
* Detect Cycle
* Find Start of Cycle
* Find Length of Loop
* Happy Number Problems

Time Complexity: O(n)

Space Complexity: O(1)

---

## Two Pointer Technique

Used in:

* Removing nth node
* Rotating list
* Partitioning
* Merging

---

## Dummy Node Technique

Creates a temporary node before head.

Benefits:

* Simplifies insertions.
* Simplifies deletions.
* Handles edge cases.
* Avoids separate handling for head node.

---

# Important Problems Revised

## Reverse Linked List

Idea:

* Maintain prev, curr and next pointers.
* Reverse one pointer at a time.

Time: O(n)

Space: O(1)

---

## Find Middle of Linked List

Idea:

* Slow moves 1 step.
* Fast moves 2 steps.
* When fast reaches end, slow is at middle.

Time: O(n)

Space: O(1)

---

## Detect Loop

Algorithm:
Floyd's Cycle Detection

Steps:

* Move slow by one.
* Move fast by two.
* If both meet → Cycle exists.

Time: O(n)

Space: O(1)

---

## Length of Loop

After meeting point:

* Keep moving one pointer until it reaches same node.
* Count total nodes.

Time: O(n)

Space: O(1)

---

## Remove Loop

Steps:

1. Detect meeting point.
2. Move one pointer to head.
3. Move both one step.
4. Previous node breaks the cycle.

Time: O(n)

Space: O(1)

---

## Merge Two Sorted Lists

Approach:

* Compare both lists.
* Attach smaller node.
* Move corresponding pointer.

Time: O(n + m)

Space: O(1)

---

## Reverse in Groups of K

Steps:

* Reverse first K nodes.
* Recursively/Iteratively process remaining list.
* Connect reversed groups.

Time: O(n)

Space:

* Recursive → O(n/k)
* Iterative → O(1)

---

## Clone Linked List with Random Pointer

Efficient Method:

1. Insert copied nodes.
2. Copy random pointers.
3. Separate both lists.

Time: O(n)

Space: O(1)

---

## Rotate Linked List

Idea:

* Compute length.
* Make list circular.
* Break at required position.

Time: O(n)

Space: O(1)

---

# Frequently Used Patterns

✔ Pointer Manipulation

✔ Fast & Slow Pointer

✔ Dummy Node

✔ In-place Reversal

✔ Cycle Detection

✔ List Splitting

✔ List Merging

✔ Recursion

---

# Common Interview Mistakes

* Forgetting NULL checks.
* Losing next pointer while reversing.
* Incorrect head update.
* Infinite loop during cycle removal.
* Off-by-one errors while finding kth node.
* Not handling single-node or empty lists.
* Forgetting to reconnect remaining nodes.

---

# Time Complexity Summary

| Operation       | Time     | Space          |
| --------------- | -------- | -------------- |
| Traversal       | O(n)     | O(1)           |
| Reverse         | O(n)     | O(1)           |
| Middle Node     | O(n)     | O(1)           |
| Detect Loop     | O(n)     | O(1)           |
| Remove Loop     | O(n)     | O(1)           |
| Merge Lists     | O(n + m) | O(1)           |
| Rotate List     | O(n)     | O(1)           |
| Reverse K Group | O(n)     | O(1) Iterative |

---

# Revision Takeaways

* Pointer manipulation becomes easier with practice.
* Fast & Slow Pointer is one of the most versatile Linked List techniques.
* Dummy nodes simplify complex insertion and deletion logic.
* Most Linked List interview questions can be solved using a small set of recurring patterns.
* Consistent revision improves speed, reduces bugs, and strengthens interview confidence.

---

## Status

**Day:** 48/60

**Topic Completed:** Linked List Revision

**Focus:** Reinforcing concepts, recognizing patterns, and improving implementation confidence before moving to the next DSA topic.
