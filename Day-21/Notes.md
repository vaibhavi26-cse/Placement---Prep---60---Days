# Day 21 - Two Pointer & Sliding Window

## Topic Covered
- Two Pointer Technique
- Sliding Window Technique

---

# Problem Solving Pattern 1: Two Pointer

## Idea
Use two indices (left and right) to traverse the array efficiently instead of checking every possible pair.

This technique is mostly used when:
- Array is sorted
- Looking for pairs/triplets
- Removing duplicates
- Partitioning elements

---

## Common Applications

- Pair Sum in Sorted Array
- Triplet Sum
- Remove Duplicates
- Move Zeroes
- Container With Most Water
- Trapping Rain Water
- Valid Palindrome

---

## General Algorithm

1. Initialize two pointers.
2. Compare values.
3. Move the appropriate pointer based on the condition.
4. Continue until pointers meet.

---

## Time Complexity

- **Time:** O(n)
- **Space:** O(1)

---

# Problem Solving Pattern 2: Sliding Window

## Idea

Instead of recalculating every subarray, maintain a window and slide it across the array.

Useful whenever the problem involves:

- Continuous subarray
- Continuous substring
- Window-based calculations

---

# Types of Sliding Window

## 1. Fixed Size Window

Window size remains constant.

### Examples

- Maximum Sum of K Elements
- Average of K Elements
- First Negative Integer in Every Window
- Count Distinct Elements in Every Window

### Steps

- Build first window.
- Store answer.
- Remove left element.
- Add new right element.
- Repeat.

---

## 2. Variable Size Window

Window size changes according to conditions.

### Examples

- Longest Substring Without Repeating Characters
- Smallest Subarray With Given Sum
- Longest Subarray With Sum ≤ K
- Fruit Into Baskets

### Steps

- Expand right pointer.
- Check condition.
- If violated, shrink from left.
- Update answer whenever valid.

---

# How to Identify the Pattern

### Use Two Pointer When

- Array is sorted
- Pair/triplet questions
- Comparing elements from both ends
- Need O(n) optimization

---

### Use Sliding Window When

- Continuous subarray
- Continuous substring
- Fixed K size
- Dynamic window size

---

# Key Learnings

- Always check whether brute force can be optimized.
- Sliding Window removes repeated calculations.
- Two Pointer avoids nested loops.
- Both techniques frequently reduce O(n²) to O(n).
- Recognizing the correct pattern is more important than memorizing solutions.

---

# Interview Tips

✅ Ask yourself:

- Is the array sorted?
- Is it asking for a pair or triplet?
- Is it a contiguous subarray?
- Is there a fixed window size?
- Can I maintain previous computations instead of recalculating?

If the answer is yes, think of Two Pointer or Sliding Window.

---

# Complexity Summary

| Technique | Time | Space |
|-----------|------|-------|
| Two Pointer | O(n) | O(1) |
| Sliding Window | O(n) | O(1) (usually) |

---

# GFG 160 Takeaway

Two Pointer and Sliding Window are among the most frequently used patterns in coding interviews. Mastering them helps solve many array and string problems efficiently while significantly improving problem-solving speed.

---
**Day 21/60 Completed ✅**

**Next Topic:** Prefix Sum & Difference Array