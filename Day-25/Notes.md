# Pair with Given Sum in a Sorted Array

## Problem Statement
Given a sorted array `arr[]` and an integer `target`, count the number of pairs having distinct indices whose sum equals `target`.

---

## Approach
Since the array is already sorted, we can efficiently solve the problem using the **Two Pointer Technique**.

- Initialize two pointers:
  - `left = 0`
  - `right = n - 1`
- Calculate the sum of the elements at both pointers.
- If the sum is:
  - Less than target → Move `left` forward.
  - Greater than target → Move `right` backward.
  - Equal to target:
    - Count duplicate occurrences on both sides.
    - Multiply their frequencies to get the total number of valid pairs.
    - Move both pointers past the duplicates.
- If both pointers point to the same value, all remaining elements are equal.
  - Number of pairs = `n × (n - 1) / 2`.

---

## Algorithm
1. Set `left = 0` and `right = n - 1`.
2. While `left < right`:
   - Compute `sum = arr[left] + arr[right]`.
   - If `sum < target`, increment `left`.
   - If `sum > target`, decrement `right`.
   - Otherwise:
     - If `arr[left] == arr[right]`
       - Add `k × (k - 1) / 2` to answer and stop.
     - Count duplicates on both ends.
     - Add `leftCount × rightCount` to the answer.
     - Move both pointers.
3. Return the total count.

---

## Why Two Pointers?
Because the array is sorted:
- Increasing the left pointer increases the sum.
- Decreasing the right pointer decreases the sum.

This allows us to find all valid pairs in one traversal.

---

## Handling Duplicates
Example:

arr = [1, 1, 2, 2]
target = 3

- Left duplicates = 2
- Right duplicates = 2

Total pairs = 2 × 2 = 4

---

## Edge Cases
- No valid pair exists.
- All elements are the same.
- Multiple duplicate values.
- Negative numbers.
- Large integer values (use `long long` to avoid overflow).

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Key Learning
- Two Pointer Technique on sorted arrays.
- Efficient duplicate counting.
- Combinatorial counting (`nC2`) when all remaining elements are identical.
- Prevent integer overflow using `long long`.

---

## Patterns Used
- Two Pointers
- Duplicate Handling
- Frequency Counting
- Combinatorics
- Sorted Array Optimization

---

## Similar Problems
- Two Sum II (Sorted Array)
- Count Pairs with Given Sum
- Closest Pair from Two Sorted Arrays
- Pair Sum in Rotated Sorted Array
- 3Sum