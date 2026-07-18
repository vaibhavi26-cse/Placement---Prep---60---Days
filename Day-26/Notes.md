# Day 26 - Count the Number of Possible Triangles

## Problem Solved
- Count the Number of Possible Triangles

---

## Pattern Used
- Sorting
- Two Pointers

---

## Key Idea

A triangle is valid only if:

a + b > c

After sorting the array, we consider the largest side and search for two smaller sides using two pointers.

If:

arr[left] + arr[right] > arr[i]

then every element between left and right also forms a valid triangle because the array is sorted.

---

## Algorithm

1. Sort the array.
2. Fix the largest side from the end.
3. Use two pointers:
   - left = 0
   - right = i - 1
4. If sum > largest side:
   - count += right - left
   - move right--
5. Else
   - move left++

---

## Complexity

- Time: O(n²)
- Space: O(1)

---

## Learning

- Triangle inequality becomes much easier after sorting.
- Two pointers help count multiple valid pairs together.
- Avoid checking every triplet individually.

---

## Takeaway

Whenever the problem involves finding valid pairs in a sorted array, consider using the Two Pointer technique instead of brute force.