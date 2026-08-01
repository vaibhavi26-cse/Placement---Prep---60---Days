# 📅 Day 44 - Clone List with Next and Random

## 📌 Problem
**Clone List with Next and Random** (Hard)

### Problem Statement

Given a linked list where each node contains:

- A **next** pointer pointing to the next node.
- A **random** pointer pointing to any node in the list (or NULL).

Create a deep copy of the linked list such that:

- Every node in the cloned list is newly created.
- Both **next** and **random** pointers match the original list.
- No pointer in the cloned list should point to any original node.
- The original linked list must remain unchanged.

---

# 💡 Approach

Instead of using a HashMap, we use an **O(1) extra space** technique.

The algorithm consists of **three passes** over the linked list.

---

# 🔍 Key Observation

Suppose the original list is:

A → B → C

Insert cloned nodes between them:

A → A' → B → B' → C → C'

Now every cloned node is immediately after its original node.

This allows easy assignment of random pointers without any extra storage.

---

# 🧠 Algorithm

### Step 1: Insert Clone Nodes

For every original node:

- Create a clone.
- Insert it immediately after the original node.

Example:

Original:

1 → 2 → 3

After insertion:

1 → 1' → 2 → 2' → 3 → 3'

---

### Step 2: Copy Random Pointers

If

Original.random = X

Then

Clone.random = X.next

because X.next is the cloned node.

Formula:

clone->random = original->random ? original->random->next : NULL;

---

### Step 3: Separate Both Lists

Restore the original linked list.

Extract the cloned linked list.

Return the cloned head.

---

# ✨ Example

Original List

1 → 2 → 3

Random:

1 → 3

2 → 1

3 → 2

---

After Step 1

1 → 1' → 2 → 2' → 3 → 3'

---

After Step 2

Random pointers become

1' → 3'

2' → 1'

3' → 2'

---

After Step 3

Original

1 → 2 → 3

Clone

1' → 2' → 3'

Both lists become completely independent.

---

# 🎯 Why This Works

Since every cloned node is placed immediately after its original node,

Original Node

↓

Clone Node

Therefore,

Original Random

↓

Original Random Next

↓

Clone Random

No HashMap is required.

---

# ⚠️ Common Mistakes

### ❌ Forgetting NULL Check

Incorrect

clone->random = curr->random->next;

Correct

```cpp
if (curr->random)
    curr->next->random = curr->random->next;
```

---

### ❌ Breaking Original List

While separating the lists,

carefully restore:

curr->next

and

cloneCurr->next

otherwise the original linked list gets corrupted.

---

### ❌ Moving Pointer Incorrectly

Always move using

curr = curr->next->next;

during the first two traversals.

---

# ⏱️ Complexity Analysis

### Time Complexity

- Insert clone nodes → O(N)
- Copy random pointers → O(N)
- Separate lists → O(N)

Overall:

**O(N)**

---

### Space Complexity

No extra data structure is used.

Only cloned nodes are created.

**O(1)** Auxiliary Space

---

# 🎯 Concepts Revised

- Linked Lists
- Deep Copy
- Random Pointer Manipulation
- In-place Algorithms
- Pointer Traversal
- O(1) Space Optimization

---

# 📚 Key Takeaways

- Inserting cloned nodes between original nodes eliminates the need for a HashMap.
- Random pointers can be assigned using:
  original->random->next
- Restore the original linked list while extracting the cloned one.
- This is the optimal solution expected in coding interviews.

---

## ✅ Status

- Problem Solved ✔️
- Learned Deep Copy of Linked Lists ✔️
- Understood O(1) Space Optimization ✔️
- Strengthened Pointer Manipulation Skills ✔️
- Day 44 Completed 🚀