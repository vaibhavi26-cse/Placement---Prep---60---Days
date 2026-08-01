# 📅 Day 41 - Merge Two Sorted Linked Lists

## 📌 Problem
**Merge Two Sorted Linked Lists** (Medium)

### Problem Statement
Given the heads of two sorted singly linked lists, merge them into a single sorted linked list and return its head.

The merged list should contain all nodes from both lists while maintaining sorted order.

---

# 💡 Approach

Since both linked lists are already sorted, we can merge them using the **Two Pointer Technique**.

We compare the current nodes of both lists:
- Attach the smaller node to the merged list.
- Move that list's pointer forward.
- Continue until one list becomes empty.
- Finally, attach the remaining nodes of the non-empty list.

A **dummy node** is used to simplify handling the head of the merged list.

---

# 🔍 Key Observations

- Both linked lists are already sorted.
- No extra list is required.
- Existing nodes are reused.
- Dummy node avoids handling special cases for the first node.

---

# 🧠 Algorithm

1. Create a dummy node.
2. Maintain a tail pointer pointing to the dummy node.
3. Traverse both linked lists simultaneously.
4. Compare current nodes.
5. Attach the smaller node to the merged list.
6. Move the corresponding pointer.
7. Move the tail pointer.
8. When one list finishes, attach the remaining nodes of the other list.
9. Return `dummy.next`.

---

# ✨ Example

Input:

List1:

2 → 5 → 15 → 20

List2:

3 → 10 → 40

Step-by-step:

Compare 2 and 3

2 is smaller

Merged:

2

Compare 5 and 3

3 is smaller

Merged:

2 → 3

Compare 5 and 10

5 is smaller

Merged:

2 → 3 → 5

Compare 15 and 10

10 is smaller

Merged:

2 → 3 → 5 → 10

Compare 15 and 40

15 is smaller

Merged:

2 → 3 → 5 → 10 → 15

Compare 20 and 40

20 is smaller

Merged:

2 → 3 → 5 → 10 → 15 → 20

First list ends.

Attach remaining node:

40

Final Output:

2 → 3 → 5 → 10 → 15 → 20 → 40

---

# ⏱️ Complexity Analysis

### Time Complexity

Each node is visited exactly once.

**O(N + M)**

---

### Space Complexity

Only one dummy node is used.

**O(1)**

---

# 🎯 Concepts Revised

- Linked Lists
- Two Pointer Technique
- Dummy Node
- Pointer Manipulation
- In-place Merging

---

# 📚 Key Takeaways

- Dummy nodes simplify linked list problems.
- Reuse existing nodes instead of creating new ones.
- Move only the pointer whose node is selected.
- Always attach the remaining list after one list becomes empty.
- Two Pointer Technique efficiently merges two sorted sequences in linear time.

---

## ✅ Status

- Problem Solved ✔️
- Understood Two Pointer Merging ✔️
- Improved Linked List Pointer Manipulation ✔️
- Day 41 Completed 🚀