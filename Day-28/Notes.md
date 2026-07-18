# Day 28 - Sliding Window (Part 1)

## Problems Solved

- Indexes of Subarray Sum
- Count Distinct Elements in Every Window

---

# 1. Indexes of Subarray Sum

## Pattern

- Sliding Window

### Key Idea

Since all numbers are non-negative, maintain a window whose sum equals the target.

Expand when sum is small.

Shrink when sum becomes larger than the target.

---

# 2. Count Distinct Elements in Every Window

## Pattern

- Sliding Window
- Hash Map

### Key Idea

Maintain frequencies of elements inside the current window.

Whenever the window moves:

- Remove outgoing element
- Add incoming element
- Frequency map size gives distinct count.

---

## Complexity

### Subarray Sum

- Time: O(n)
- Space: O(1)

### Distinct Elements

- Time: O(n)
- Space: O(k)

---

## Learning

- Sliding Window avoids recalculating every subarray.
- Hash Maps efficiently maintain frequencies.
- Dynamic windows greatly improve performance.

---

## Takeaway

Sliding Window is the go-to approach whenever a problem involves contiguous subarrays or substrings.