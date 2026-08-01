# 📅 Day 43 - Add Number Linked Lists

## 📌 Problem
**Add Number Linked Lists** (Medium)

### Problem Statement
Given two singly linked lists representing two non-negative integers, where each node contains a single digit, return the linked list representing their sum.

- Digits are stored from **Most Significant Digit (MSD) to Least Significant Digit (LSD)**.
- Input lists may contain leading zeros.
- Output should not contain leading zeros.

---

# 💡 Approach

Since addition starts from the **least significant digit**, but the linked lists store digits from **most significant to least significant**, we first reverse both linked lists.

### Steps:
1. Remove leading zeros from both linked lists.
2. Reverse both linked lists.
3. Traverse both lists simultaneously.
4. Add corresponding digits along with the carry.
5. Create a new node containing `sum % 10`.
6. Update carry using `sum / 10`.
7. Continue until both lists and carry are exhausted.
8. Reverse the resultant linked list.
9. Remove any leading zeros from the final answer.

---

# 🔍 Key Observations

- Reversing the linked lists allows addition from the least significant digit.
- Always continue the loop while:
  - First list has nodes
  - Second list has nodes
  - Carry exists
- Don't forget to add the final carry as a new node.
- Remove leading zeros only before addition and after generating the final answer.

---

# 🧠 Algorithm

1. Remove leading zeros from both input lists.
2. Reverse both linked lists.
3. Initialize:
   - Dummy node
   - Tail pointer
   - Carry = 0
4. Traverse until both lists and carry become empty.
5. Compute:
   - `sum = carry + digit1 + digit2`
6. Store:
   - `sum % 10`
7. Update:
   - `carry = sum / 10`
8. Reverse the result.
9. Remove leading zeros.
10. Return the head.

---

# ✨ Example

Input:

List1:
1 → 2 → 3

List2:
9 → 9 → 9

Reverse:

3 → 2 → 1

9 → 9 → 9

Addition:

3 + 9 = 12

Digit = 2, Carry = 1

2 + 9 + 1 = 12

Digit = 2, Carry = 1

1 + 9 + 1 = 11

Digit = 1, Carry = 1

Carry remains = 1

Result (Reversed):

2 → 2 → 1 → 1

Reverse again:

1 → 1 → 2 → 2

Output:

1 → 1 → 2 → 2

---

# ⚠️ Mistakes I Faced

### ❌ Bug

```cpp
head2 = reverse(head1);
```

Instead of:

```cpp
head2 = reverse(head2);
```

This caused both pointers to reference the same reversed list, producing incorrect answers.

### ✅ Fix

Reverse each linked list independently.

---

# ⏱️ Complexity Analysis

### Time Complexity

- Removing leading zeros → O(N + M)
- Reversing both lists → O(N + M)
- Addition → O(max(N, M))
- Reversing result → O(N + M)

Overall:

**O(N + M)**

---

### Space Complexity

Only the resultant linked list is created.

**O(max(N, M))**

---

# 🎯 Concepts Revised

- Linked List Reversal
- Dummy Node Technique
- Carry Handling
- Linked List Traversal
- Building a New Linked List
- Edge Case Handling
- Leading Zero Removal

---

# 📚 Key Takeaways

- Reverse the linked list whenever operations must begin from the last node.
- Dummy nodes simplify linked list construction.
- Always process the remaining carry after traversal.
- Carefully verify pointer assignments—using the wrong pointer can completely change the logic.
- Test with different length lists, leading zeros, and carry-over cases.

---

## ✅ Status

- Problem Solved ✔️
- Understood Reverse + Addition Technique ✔️
- Learned to Debug Pointer Assignment Errors ✔️
- Day 43 Completed 🚀