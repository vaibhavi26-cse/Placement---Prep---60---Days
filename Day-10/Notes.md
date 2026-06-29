# Day 10 - Notes 📚

## 60 Days Placement Preparation

Date: **/**/____

Problem Solved:
Merge Two Sorted Arrays Without Extra Space

---

# Problem Statement

Given two sorted arrays `a[]` and `b[]` of size `n` and `m`, merge them without using any extra space.

Modify:

* `a[]` → first `n` smallest elements
* `b[]` → remaining `m` larger elements

---

# Initial Thought Process

Brute force idea:

1. Create a third merged array
2. Sort/merge both arrays
3. Copy elements back

Problem:

❌ Extra space required

Constraint changed the complete approach.

---

# Pattern Used

Pattern:
In-place Array Manipulation + Shell Sort Concept

Technique:
Gap Method

---

# Gap Method Explanation

Treat both arrays as one virtual combined array.

Steps:

1. Calculate gap

```cpp
gap = ceil((n+m)/2)
```

2. Compare elements separated by gap distance

3. Swap if:

```cpp
arr[i] > arr[j]
```

4. Reduce gap:

```cpp
gap = ceil(gap/2)
```

5. Repeat until:

```cpp
gap = 1
```

---

# Dry Run

Input:

a[] = {1,4,7,8,10}

b[] = {2,3,9}

Combined view:

1 4 7 8 10 2 3 9

Gap:

8/2 = 4

Compare:

1 ↔ 10

4 ↔ 2 → swap

7 ↔ 3 → swap

8 ↔ 9

Repeat for gap = 2

Repeat for gap = 1

Final:

a[] = {1,2,3,4,7}

b[] = {8,9,10}

---

# Complexity Analysis

Time Complexity:

```cpp
O((n+m)log(n+m))
```

Space Complexity:

```cpp
O(1)
```

---

# Important Observations

✔ Constraints can completely change approach

✔ Avoid immediately using extra arrays

✔ Think about in-place manipulation first

✔ Two arrays can be treated as one virtual array

✔ Gap method is based on Shell Sort

---

# Common Mistakes

□ Wrong gap calculation

Correct:

```cpp
gap=(gap/2)+(gap%2)
```

Wrong:

```cpp
gap=gap/2
```

□ Incorrect index mapping between arrays

□ Forgetting comparisons between:

* Array A ↔ Array A
* Array A ↔ Array B
* Array B ↔ Array B

---

# Revision Keywords

Array
In-place Algorithm
Gap Method
Shell Sort
Optimization
Sorting Pattern

---

# Today's Learning

The obvious solution is not always the expected one.

Constraints often reveal the actual pattern hidden inside a problem.

---

Status:

✅ Day 10 Completed
