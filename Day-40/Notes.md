# Day 40 - Rotate a Linked List

## 📚 Topic

**Linked List - Rotation**

Today I solved the **Rotate a Linked List** problem. This problem helped me understand how to manipulate linked list connections efficiently and introduced the concept of converting a linked list into a circular structure temporarily.

---

# 🧠 Problem Statement

Given the head of a singly linked list and an integer `k`, rotate the linked list to the right by `k` positions.

### Example

Input:

```text
1 -> 2 -> 3 -> 4 -> 5 -> NULL

k = 2
```

Output:

```text
4 -> 5 -> 1 -> 2 -> 3 -> NULL
```

---

# 🔑 Core Idea

Rotating a linked list means moving the last `k` nodes to the beginning.

Example:

```text
1 -> 2 -> 3 -> 4 -> 5

Rotate by 2
```

The last two nodes:

```text
4 -> 5
```

move to the front:

```text
4 -> 5 -> 1 -> 2 -> 3
```

---

# 🚀 Approach Used

## Step 1: Find Length and Tail

Traverse the linked list and calculate:

* Length of the list
* Last node (tail)

Example:

```text
1 -> 2 -> 3 -> 4 -> 5

Length = 5
Tail = 5
```

---

## Step 2: Optimize k

If `k` is greater than the length:

```cpp
k = k % length;
```

Example:

```text
k = 7
length = 5

7 % 5 = 2
```

Rotating 7 times is same as rotating 2 times.

---

# Step 3: Create Circular Linked List

Connect tail with head:

Before:

```text
1 -> 2 -> 3 -> 4 -> 5 -> NULL
```

After:

```text
1 -> 2 -> 3 -> 4 -> 5
↑                 ↓
└─────────────────┘
```

Now the list becomes circular.

---

# Step 4: Find New Tail

For right rotation by `k`:

New tail position:

```text
length - k
```

Example:

```text
length = 5
k = 2

5 - 2 = 3
```

Move to the 3rd node:

```text
1 -> 2 -> 3 -> 4 -> 5
          ↑
      New Tail
```

---

# Step 5: Break Circular Connection

The node after new tail becomes the new head.

```text
New Tail -> New Head
```

Break the link:

```cpp
newTail->next = nullptr;
```

Final list:

```text
4 -> 5 -> 1 -> 2 -> 3 -> NULL
```

---

# 🔄 Algorithm

```text
Find length and tail

↓

k = k % length

↓

Connect tail with head

↓

Find new tail position (length-k)

↓

Set new head

↓

Break circular link

↓

Return new head
```

---

# 🌳 Dry Run

Input:

```text
1 -> 2 -> 3 -> 4 -> 5

k = 2
```

Length:

```text
5
```

Make circular:

```text
1 -> 2 -> 3 -> 4 -> 5
↑                 ↓
└─────────────────┘
```

Find new tail:

```text
length - k

5 - 2 = 3
```

New tail:

```text
3
```

New head:

```text
4
```

Break:

```text
4 -> 5 -> 1 -> 2 -> 3 -> NULL
```

---

# ⏱ Complexity Analysis

## Time Complexity

```text
O(N)
```

The list is traversed a few times but each traversal is linear.

---

## Space Complexity

```text
O(1)
```

Only pointers are used.

---

# 🧠 Important Concepts Learned

## 1. Linked List Manipulation

Changing the `next` pointer can completely change the structure of a linked list.

---

## 2. Circular Linked List Technique

Temporarily connecting tail with head makes rotation easier.

---

## 3. Modulo Optimization

Always reduce large rotations:

```cpp
k = k % length;
```

This avoids unnecessary operations.

---

# 🎯 Pattern Learned

For linked list rotation:

```text
Find Length

↓

Connect Tail to Head

↓

Find Breaking Point

↓

Break Link

↓

Return New Head
```

---

# 📚 Similar Problems

* Reverse Linked List
* Reverse Linked List in Groups
* Rotate List
* Merge Two Sorted Lists
* Reorder Linked List
* Detect Cycle in Linked List

---

# 🔍 Common Mistakes

❌ Forgetting `k % length`.

❌ Not handling `k = 0`.

❌ Losing the head reference.

❌ Forgetting to break the circular linked list.

❌ Incorrect calculation of new tail position.

---

# 🚀 Key Takeaways

✅ Learned how to rotate a linked list efficiently.

✅ Understood temporary circular linked list creation.

✅ Improved pointer manipulation skills.

✅ Learned another important linked list pattern.

✅ Strengthened understanding of modifying linked list structure without extra space.

---

# 📖 Problem Solved

* ✔️ Rotate a Linked List

---

# 💡 Summary

Today I solved the **Rotate a Linked List** problem using pointer manipulation. I learned how to optimize rotations using modulo, temporarily convert a linked list into a circular list, find the correct breaking point, and restore the final linked list structure. This problem strengthened my understanding of linked list traversal and pointer-based problem solving.
