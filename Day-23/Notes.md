# Day 23 - Count Pairs whose Sum is Less than Target

## Problem

Given an array and a target value, count the number of pairs whose sum is **strictly less** than the target.

---

## Approach Used

### Sorting + Two Pointers

1. Sort the array.
2. Initialize:
   - `left = 0`
   - `right = n - 1`
3. While `left < right`:
   - If
     ```
     arr[left] + arr[right] < target
     ```
     then every element from `left + 1` to `right` also forms a valid pair with `arr[left]`.

     Therefore,

     ```
     count += right - left
     ```

     Move `left`.

   - Otherwise, move `right`.

---

## Why Add `(right - left)`?

Since the array is sorted:

If

```
arr[left] + arr[right] < target
```

then

```
arr[left] + arr[left+1]
arr[left] + arr[left+2]
...
arr[left] + arr[right]
```

are all valid pairs.

Instead of checking them one by one, count them together.

---

## Example

Sorted Array:

```
1 2 3 5
Target = 8
```

```
1 + 5 < 8
```

Valid pairs are:

```
(1,2)
(1,3)
(1,5)
```

Count added:

```
right - left = 3
```

---

## Time Complexity

Sorting: `O(n log n)`

Two Pointer Traversal: `O(n)`

Overall:

`O(n log n)`

---

## Space Complexity

`O(1)`

---

## Learning

- Two Pointer Technique after sorting.
- Counting multiple valid pairs in one step.
- Using sorted order to avoid nested loops.
- Optimizing from `O(n²)` to `O(n log n)`.