# Day 32 - Prefix Sum & Prefix/Suffix Product

## Problems Solved

1. Longest Subarray with Equal Number of 0s and 1s
2. Product Array Puzzle

---

# 1. Longest Subarray with Equal Number of 0s and 1s

## Problem

Given a binary array, find the length of the longest subarray containing an equal number of **0s** and **1s**.

### Example

Input:

[1, 0, 1, 1, 1, 0, 0]

Output:

6

---

## Approach

### Observation

A subarray has an equal number of 0s and 1s when:

Number of 0s = Number of 1s

Instead of counting both separately, transform the array:

- Replace **0 → -1**
- Replace **1 → +1**

Now the problem becomes:

**Find the longest subarray having sum = 0.**

This is the same Prefix Sum + HashMap technique used in "Longest Subarray with Sum K".

---

## Algorithm

1. Initialize:
   - Prefix Sum = 0
   - HashMap
   - Answer = 0
2. Traverse the array:
   - Add +1 for every 1.
   - Add -1 for every 0.
   - If prefix sum becomes 0, update answer.
   - If the prefix sum already exists, update the maximum length.
   - Otherwise store its first occurrence.
3. Return the answer.

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

# 2. Product Array Puzzle

## Problem

Construct an array where every element contains the product of all array elements except itself.

Division is **not allowed**.

### Example

Input:

[10, 3, 5, 6, 2]

Output:

[180, 600, 360, 300, 900]

---

## Approach

### Observation

Instead of multiplying every element except itself (O(n²)), calculate:

- Product of all elements to the **left**
- Product of all elements to the **right**

For every index,

Result = Left Product × Right Product

This avoids division and also works correctly when the array contains zeros.

---

## Algorithm

1. Create the result array.
2. Traverse from left to right and store the left product.
3. Traverse from right to left while maintaining the right product.
4. Multiply the current result with the right product.
5. Return the result array.

---

## Example

Array:

[10, 3, 5, 6, 2]

Left Products:

[1, 10, 30, 150, 900]

Right Products:

[180, 60, 12, 2, 1]

Final Answer:

[180, 600, 360, 300, 900]

---

## Complexity

**Time Complexity:** O(n)

**Space Complexity:** O(1) Extra Space (excluding the output array)

---

## Pattern Used

- Prefix Product
- Suffix Product
- Two Pass Traversal

---

# Key Learnings of Day 32

- Binary array problems can often be converted into Prefix Sum problems by replacing **0 with -1**.
- Prefix Sum + HashMap is useful for finding the longest valid subarray in linear time.
- Storing only the first occurrence of each prefix sum gives the maximum possible subarray length.
- Prefix and Suffix Products eliminate the need for division in product array problems.
- Two-pass traversal is a common optimization technique for array problems.

---

# Comparison

| Problem | Technique | Time | Space |
|---------|-----------|------|-------|
| Longest Subarray with Equal 0s & 1s | Prefix Sum + HashMap | O(n) | O(n) |
| Product Array Puzzle | Prefix Product + Suffix Product | O(n) | O(1) Extra |

---

# Overall Patterns Covered Today

✅ Prefix Sum

- Running Sum
- HashMap
- Binary Array Transformation
- Longest Subarray Pattern

✅ Prefix/Suffix Product

- Left Product
- Right Product
- Two Pass Traversal
- Product Except Self

---

## Takeaway

Today's problems introduced two important array techniques. The first showed how Prefix Sum and a HashMap can transform a binary array problem into a subarray sum problem by replacing 0s with -1s. The second demonstrated how Prefix and Suffix Products can efficiently compute the product of all elements except the current one without using division. Both approaches reduce brute-force solutions to linear time and are frequently asked in coding interviews.