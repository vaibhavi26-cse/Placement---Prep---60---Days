# Day 31 - Prefix Sum Pattern

## Problems Solved

1. Equilibrium Point
2. Longest Subarray with Sum K

---

# 1. Equilibrium Point

## Problem

Given an array, find the first index such that:

**Sum of elements on the left = Sum of elements on the right**

Return the index (0-based). If no such index exists, return **-1**.

### Example

Input:

[1, 2, 0, 3]

Output:

2

Explanation:

Left Sum = 1 + 2 = 3

Right Sum = 3

---

## Approach

### Observation

Calculating left and right sums separately for every index takes **O(n²)**.

Instead,

- Find the total sum of the array.
- Maintain a running left sum.
- Remove the current element from the total sum to obtain the right sum.
- Compare left and right sums.

---

## Algorithm

1. Compute total sum.
2. Initialize `leftSum = 0`.
3. Traverse the array:
   - Subtract current element from total sum (right sum).
   - If left sum equals right sum, return the index.
   - Add current element to left sum.
4. If no equilibrium index exists, return -1.

---

## Complexity

**Time Complexity:** O(n)

**Space Complexity:** O(1)

---

## Pattern Used

- Prefix Sum
- Running Sum

---

# 2. Longest Subarray with Sum K

## Problem

Given an array containing positive, negative, and zero values, find the length of the **longest subarray** whose sum equals **K**.

### Example

Input:

arr = [10, 5, 2, 7, 1, -10]

K = 15

Output:

6

---

## Approach

### Observation

Since the array contains **negative numbers**, the Sliding Window technique does **not** work.

Instead, use **Prefix Sum + HashMap**.

If

Current Prefix Sum = **S**

and there exists a previous prefix sum **S − K**,

then the subarray between those two indices has sum **K**.

To obtain the longest subarray, always store the **first occurrence** of every prefix sum.

---

## Algorithm

1. Initialize:
   - Prefix Sum = 0
   - HashMap
   - Answer = 0
2. Traverse the array:
   - Update prefix sum.
   - If prefix sum equals K, update answer.
   - If `(prefixSum - K)` exists in the map, update the maximum length.
   - Store the current prefix sum only if it is seen for the first time.
3. Return the maximum length.

---

## Complexity

**Time Complexity:** O(n)

**Space Complexity:** O(n)

---

## Pattern Used

- Prefix Sum
- HashMap
- Running Sum
- First Occurrence Technique

---

# Key Learnings of Day 31

- Prefix Sum helps answer range-sum problems efficiently.
- Running sums eliminate repeated calculations.
- Prefix Sum can derive left and right sums in constant time.
- HashMap combined with Prefix Sum solves subarray sum problems in **O(n)**.
- Storing the first occurrence of a prefix sum ensures the longest possible subarray.
- Sliding Window is not suitable when negative numbers are present.

---

# Comparison

| Problem | Technique | Time | Space |
|---------|-----------|------|-------|
| Equilibrium Point | Prefix Sum + Running Sum | O(n) | O(1) |
| Longest Subarray with Sum K | Prefix Sum + HashMap | O(n) | O(n) |

---

## Overall Pattern Covered Today

✅ Prefix Sum

- Running Prefix Sum
- Left Sum & Right Sum
- Prefix Sum + HashMap
- Longest Subarray Problems
- Efficient Array Traversal

---

## Takeaway

Today's problems strengthened the understanding of the **Prefix Sum** pattern. While the Equilibrium Point problem demonstrates how a running sum can replace repeated calculations, the Longest Subarray with Sum K problem extends the same idea by combining prefix sums with a hash map to efficiently handle arrays containing negative numbers. Mastering this pattern is essential because it frequently appears in coding interviews and competitive programming.