# Sum Closest to Target

## Problem Statement

Given an array `arr[]` and an integer `target`, find a pair `(a, b)` such that:

* `a ≤ b`
* The sum `(a + b)` is closest to `target`.
* If multiple pairs have the same minimum difference from the target, return the pair having the **maximum absolute difference** (`|a - b|`).
* If the array contains fewer than two elements, return an empty array.

---

# Intuition

A brute-force solution would check every possible pair and compute its distance from the target.

Since the order of elements doesn't matter, we can first **sort the array** and then use the **Two Pointer** technique to efficiently search for the closest sum.

Sorting allows us to intelligently move pointers:

* Increase the left pointer if the current sum is too small.
* Decrease the right pointer if the current sum is too large.

---

# Algorithm

1. If the array size is less than 2, return an empty array.
2. Sort the array.
3. Initialize:

   * `left = 0`
   * `right = n - 1`
4. Maintain:

   * `bestDiff` → smallest difference from target.
   * `bestAbsDiff` → largest absolute difference among equally close pairs.
   * `answer` → current best pair.
5. While `left < right`:

   * Compute:

     * `sum = arr[left] + arr[right]`
     * `diff = abs(sum - target)`
     * `absDiff = arr[right] - arr[left]`
   * Update the answer if:

     * `diff < bestDiff`, or
     * `diff == bestDiff` **and** `absDiff > bestAbsDiff`.
   * Move pointers:

     * If `sum < target`, increment `left`.
     * Otherwise, decrement `right`.
6. Return the stored answer.

---

# Dry Run

### Input

```text
arr = [5, 2, 7, 1, 4]
target = 10
```

### After Sorting

```text
[1, 2, 4, 5, 7]
```

| Left | Right | Pair  | Sum | Difference | Best Pair                          |
| ---- | ----- | ----- | --: | ---------: | ---------------------------------- |
| 1    | 7     | (1,7) |   8 |          2 | (1,7)                              |
| 2    | 7     | (2,7) |   9 |          1 | (2,7)                              |
| 4    | 7     | (4,7) |  11 |          1 | (2,7) (larger absolute difference) |
| 4    | 5     | (4,5) |   9 |          1 | (2,7)                              |

### Output

```text
[2, 7]
```

---

# Why Two Pointers Work?

After sorting:

* Moving the **left pointer right** increases the sum.
* Moving the **right pointer left** decreases the sum.

This allows us to explore all promising pairs in **linear time** after sorting, instead of checking every combination.

---

# Edge Cases

* Array size less than 2.
* Exact target sum exists.
* Multiple pairs equally close to the target.
* Negative numbers.
* Duplicate elements.
* All elements greater or smaller than the target.

---

# Complexity Analysis

| Operation             | Complexity     |
| --------------------- | -------------- |
| Sorting               | **O(n log n)** |
| Two Pointer Traversal | **O(n)**       |
| Overall               | **O(n log n)** |
| Extra Space           | **O(1)**       |

---

# Key Learning

* Two Pointer technique is highly effective on **sorted arrays**.
* Always think about sorting first when searching for pairs with a target condition.
* Tie-breaking conditions should be handled during the update step.
* Do **not** stop when an exact target sum is found—another exact pair may satisfy the tie-breaking rule by having a larger absolute difference.
