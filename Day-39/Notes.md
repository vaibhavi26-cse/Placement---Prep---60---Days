# Day 39 - Reverse a Linked List (Linked List)

## 📚 Topic

**Linked List - Reversal of Linked List**

Today I started learning **Linked Lists** and solved one of the most fundamental problems: **Reverse a Linked List**.

This problem helped me understand pointer manipulation, node connections, and how linked list traversal works.

---

# 🧠 Problem Statement

Given the head of a singly linked list, reverse the linked list and return the new head.

Example:

Input:

```text
1 -> 2 -> 3 -> 4 -> NULL
```

Output:

```text
4 -> 3 -> 2 -> 1 -> NULL
```

---

# 🔑 Core Idea

In a linked list, each node stores the address of the next node.

To reverse the list, we need to change every node's `next` pointer to point towards the previous node.

For example:

Before:

```text
1 -> 2 -> 3 -> NULL
```

After:

```text
1 <- 2 <- 3

3 -> 2 -> 1 -> NULL
```

---

# 🛠 Approach: Three Pointer Technique

We use three pointers:

### 1. `prev`

Stores the previous node.

Initially:

```cpp
prev = NULL;
```

---

### 2. `curr`

Stores the current node being processed.

Initially:

```cpp
curr = head;
```

---

### 3. `nextNode`

Stores the next node before breaking the connection.

---

# 🔄 Algorithm

Steps:

1. Store the next node.
2. Reverse the current node's link.
3. Move `prev` to current node.
4. Move `curr` to next node.
5. Repeat until `curr` becomes NULL.
6. Return `prev` as the new head.

---

# 📌 Dry Run

Initial Linked List:

```text
1 -> 2 -> 3 -> 4 -> NULL
```

### Step 1

Save next:

```text
nextNode = 2
```

Reverse:

```text
1 -> NULL
```

Move:

```text
prev = 1
curr = 2
```

---

### Step 2

Reverse:

```text
2 -> 1 -> NULL
```

Move:

```text
prev = 2
curr = 3
```

---

### Step 3

Reverse:

```text
3 -> 2 -> 1 -> NULL
```

---

### Final Result

```text
4 -> 3 -> 2 -> 1 -> NULL
```

---

# 💻 Implementation Logic

```cpp
Node* prev = NULL;
Node* curr = head;

while(curr != NULL){

    Node* nextNode = curr->next;

    curr->next = prev;

    prev = curr;

    curr = nextNode;
}

return prev;
```

---

# ⏱ Complexity Analysis

## Time Complexity

```text
O(N)
```

Each node is visited exactly once.

---

## Space Complexity

```text
O(1)
```

Only three pointer variables are used.

---

# 🧠 Important Concepts Learned

## 1. Pointer Manipulation

Linked lists are controlled using pointers.

Changing:

```cpp
curr->next
```

changes the structure of the linked list.

---

## 2. Preserve Next Node

Before changing links, always store the next node:

```cpp
Node* nextNode = curr->next;
```

Otherwise, the remaining list will be lost.

---

## 3. Iterative Traversal

Unlike arrays, linked lists are traversed using pointers instead of indexes.

---

# 🎯 Pattern Learned

The standard linked list reversal pattern:

```text
Save Next Node

↓

Reverse Current Link

↓

Move Previous Pointer

↓

Move Current Pointer

↓

Repeat
```

---

# 📚 Similar Problems Using This Pattern

* Reverse Linked List in Groups
* Palindrome Linked List
* Rotate Linked List
* Merge Two Sorted Lists
* Add Two Numbers using Linked Lists
* Detect and Remove Cycle

---

# 🔍 Common Mistakes

❌ Changing `curr->next` before storing the next node.

❌ Returning `head` instead of `prev`.

❌ Forgetting to move pointers after reversing.

❌ Losing reference to remaining nodes.

---

# 🚀 Key Takeaways

✅ Learned how linked list pointers work.

✅ Understood how to reverse node connections.

✅ Mastered the three-pointer technique.

✅ Improved confidence in pointer manipulation problems.

✅ Learned a fundamental pattern used in many advanced linked list problems.

---

# 📖 Problem Solved

* ✔️ Reverse a Linked List

---

# 💡 Summary

Today I solved the **Reverse a Linked List** problem using the iterative three-pointer approach. I learned how to manipulate node connections using pointers, preserve the remaining list before changing links, and reverse the direction of traversal efficiently. This problem is one of the most important foundations for solving advanced linked list problems in coding interviews.
