# Day 27 - Trapping Rain Water

## Problem Solved
- Trapping Rain Water

---

## Pattern Used
- Two Pointers

---

## Key Idea

Water trapped at any position depends on:

min(maxLeft, maxRight) - currentHeight

Instead of precomputing left and right maximum arrays, we can calculate them dynamically using two pointers.

---

## Algorithm

1. Keep two pointers:
   - left
   - right

2. Maintain:
   - leftMax
   - rightMax

3. Move the smaller height pointer.

4. Update maximum heights.

5. Add trapped water whenever current height is smaller than the corresponding maximum.

---

## Complexity

- Time: O(n)
- Space: O(1)

---

## Learning

- Only the smaller side limits the water level.
- Extra arrays are unnecessary.
- Two pointers reduce space complexity.

---

## Takeaway

Many optimization problems involving boundaries can be solved efficiently using two pointers.