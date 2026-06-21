# Day 2 - 60 Days Placement Preparation 🚀

## Problems Solved

1. Rotate Array
2. Next Permutation
3. Majority Element (> n/3 times)

---

# 1. Rotate Array

## Problem Statement

Rotate an array by `d` positions.

Example:

Input:

```text
arr = [1,2,3,4,5]
d = 2
```

Output:

```text
[3,4,5,1,2]
```

## Approach Used

Used **Reversal Algorithm**

Steps:

1. Reverse first `d` elements
2. Reverse remaining `n-d` elements
3. Reverse complete array

## Important Points

* `d = d % n`
* Avoids unnecessary rotations
* In-place rotation

## Time Complexity

```text
O(d)+O(n-d)+O(n)
= O(n)
```

## Space Complexity

```text
O(1)
```

## Challenges Faced

* Confusion between left rotation and right rotation
* Understanding loop conditions
* Handling reverse manually

---

# 2. Next Permutation

## Problem Statement

Find the next lexicographically greater permutation of an array.

If no greater permutation exists, return the smallest permutation.

Example:

Input:

```text
[1,2,3]
```

Output:

```text
[1,3,2]
```

## Approach Used

Steps:

1. Find breakpoint from right

```text
arr[i] < arr[i+1]
```

2. Find next greater element from right

3. Swap elements

4. Reverse remaining portion

## Important Points

Breakpoint means:

```text
The first place from the right where we can make the number slightly larger
```

Memory Trick:

```text
Find Dip → Swap → Reverse Tail
```

## Time Complexity

```text
O(n)
```

## Space Complexity

```text
O(1)
```

## Challenges Faced

* Understanding breakpoint logic
* Understanding why traversal starts from right
* Reversing only suffix portion

---

# 3. Majority Element (> n/3)

## Problem Statement

Find elements occurring more than:

```text
floor(n/3)
```

times.

Example:

Input:

```text
[1,2,2,3,2,1,1]
```

Output:

```text
[1,2]
```

## Approach Used

Used Extended Moore's Voting Algorithm

Steps:

1. Find possible candidates
2. Verify candidate frequencies
3. Return valid candidates

## Important Observation

At most only 2 elements can occur more than:

```text
n/3
```

Reason:

```text
3 elements occurring > n/3 times
would exceed total n elements
```

## Why Verification Is Needed?

First pass:

```text
Find suspects
```

Second pass:

```text
Check if suspects are actually valid
```

## Time Complexity

```text
O(n)
```

## Space Complexity

```text
O(1)
```

## Challenges Faced

* Understanding candidate verification
* Debugging runtime errors
* Handling edge cases

---


