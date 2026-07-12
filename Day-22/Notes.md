# Day 22 - Count all Triplets with Given Sum in Sorted Array

## Problem
Given a **sorted array** and a target value, count all triplets `(i, j, k)` such that:

- `arr[i] + arr[j] + arr[k] == target`
- `i < j < k`

---

## Approach Used

### Two Pointer Technique

Since the array is already sorted:

1. Fix one element (`i`).
2. Use two pointers:
   - `left = i + 1`
   - `right = n - 1`
3. Calculate:
   ```
   sum = arr[i] + arr[left] + arr[right]
   ```
4. If:
   - `sum < target` → Move `left`
   - `sum > target` → Move `right`
   - `sum == target`
     - Count duplicate values on both sides.
     - Add all possible index combinations.
     - Move both pointers.

---

## Why Two Pointers?

Instead of checking every triplet (`O(n³)`), fixing one element reduces the problem to finding a pair using two pointers.

This decreases the complexity to **O(n²)**.

---

## Key Observations

- Array is sorted.
- Duplicate elements must be counted correctly.
- If all elements between `left` and `right` are equal, use:
  ```
  nC2 = count × (count - 1) / 2
  ```
  to count all possible pairs.

---

## Time Complexity

- Outer Loop: **O(n)**
- Two Pointer Search: **O(n)**

**Overall:** `O(n²)`

---

## Space Complexity

`O(1)`

---

## Learning

- Applying Two Pointer Technique on sorted arrays.
- Handling duplicate values efficiently.
- Counting combinations instead of checking every possibility.
- Reducing cubic complexity to quadratic.