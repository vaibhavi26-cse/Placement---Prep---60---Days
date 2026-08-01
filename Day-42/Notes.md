# Day 42 - Linked List Group Reverse

## Problem
**Reverse Linked List in Groups of K**

**Difficulty:** Hard

---

## Problem Statement

Given the head of a singly linked list and an integer `k`,
reverse every group of `k` nodes.

If the remaining nodes are fewer than `k`,
they should also be reversed.

---

## Approach

The solution uses **Recursion**.

Steps:

1. Reverse the first `k` nodes.
2. Store the next node before breaking links.
3. Recursively reverse the remaining linked list.
4. Connect the tail of the current reversed group with the head returned from recursion.
5. Return the new head of the reversed group.

---

## Algorithm

1. Initialize:
   - `prev = NULL`
   - `curr = head`
   - `next = NULL`
   - `count = 0`

2. Reverse first `k` nodes.

3. Recursively reverse the remaining list.

4. Connect:

```
head->next = reverseKGroup(next, k);
```

5. Return `prev`.

---

## Dry Run

Input

```
1 → 2 → 3 → 4 → 5 → 6
k = 2
```

Reverse first group

```
2 → 1
```

Remaining

```
3 → 4 → 5 → 6
```

Reverse second group

```
4 → 3
```

Remaining

```
5 → 6
```

Reverse third group

```
6 → 5
```

Final Answer

```
2 → 1 → 4 → 3 → 6 → 5
```

---

## Key Learning

- Learned recursive linked list reversal.
- Understood how to reverse nodes in fixed-size groups.
- Practiced pointer manipulation using `prev`, `curr`, and `next`.
- Learned how to connect reversed groups correctly.
- Improved understanding of recursion in linked lists.
- Realized that small syntax mistakes (like using `:` instead of `;`) can prevent successful compilation.

---

## Time Complexity

```
O(N)
```

Each node is visited exactly once.

---

## Space Complexity

```
O(N / K)
```

Recursive call stack.

---

## Concepts Covered

- Linked List
- Recursion
- Pointer Manipulation
- In-place Reversal
- Divide and Conquer

---

## Interview Tips

- Always save the next node before changing pointers.
- The original head becomes the tail after reversal.
- Connect the tail to the recursively reversed remaining list.
- Be clear whether the last group with fewer than `k` nodes should be reversed, as this differs between platforms.

---

## Revision Notes

✔ Reverse first `k` nodes.

✔ Store the next node.

✔ Recursively solve for the remaining list.

✔ Connect the current group's tail with the recursive result.

✔ Return the new head (`prev`).

---

## Status

✅ Problem Solved

**Day:** 42/60

**Topic:** Linked List