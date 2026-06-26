# Day 7 Notes – DSA Practice 🚀

## 1. Sort 0s, 1s and 2s (Dutch National Flag Algorithm)

### Problem

Given an array containing only 0, 1, and 2, sort the array without using built-in sort.

### Approach

Use three pointers:

* low → position for 0
* mid → current element
* high → position for 2

### Logic

Case 1:

arr[mid] == 0

* Swap arr[low] and arr[mid]
* low++
* mid++

Case 2:

arr[mid] == 1

* mid++

Case 3:

arr[mid] == 2

* Swap arr[mid] and arr[high]
* high--

### Important Observation

Do NOT do mid++ after swapping with high.

Reason:
The new element coming at mid is unprocessed and needs checking.

### Complexity

Time: O(n)

Space: O(1)

---

## 2. H-Index

### Problem

Find the maximum value H such that there are at least H papers with citation count greater than or equal to H.

### Approach

1. Sort citations in descending order
2. Traverse array
3. Check:

citations[i] >= i + 1

If true:

increase H

Else:

stop

### Example

Input:

[3,0,5,3,0]

Sorted:

[5,3,3,0,0]

Checks:

5 >=1 ✅

3 >=2 ✅

3 >=3 ✅

0 >=4 ❌

H = 3

### Complexity

Time: O(n log n)

Space: O(1)

---

## Today's Learning

* Three pointer technique
* Condition-based traversal
* Problem interpretation before coding
* Importance of dry runs before implementation
