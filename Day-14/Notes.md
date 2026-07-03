# Day 14 Notes

## 1. Search in Row-Column Sorted Matrix

### Optimal Approach

Start from top-right corner.

Rules:

- If current element > x → move left
- If current element < x → move down
- If equal → return true

Time Complexity: O(n+m)

Space Complexity: O(1)

Key Learning:

Top-right gives ability to eliminate one row or column at each step.

---

## 2. Search in Row-wise Sorted Matrix

### Optimal Approach

For every row:

- Check if x lies between first and last element
- Apply Binary Search

Time Complexity:

O(n log m)

Space Complexity:

O(1)

Key Learning:

Binary Search works because each row is individually sorted.

---

## 3. Search in Strictly Sorted Matrix

### Optimal Approach

Treat matrix as one sorted array.

Mapping:

Row = mid/m

Column = mid%m

Apply Binary Search.

Time Complexity:

O(log(n*m))

Space Complexity:

O(1)

Key Learning:

Strict ordering allows matrix flattening.

---

## 4. Set Matrix Zeroes

### Brute Force

Use additional arrays for rows and columns.

Time Complexity:

O(n*m)

Space Complexity:

O(n+m)

### Optimal Approach

Use first row and first column as markers.

Steps:

1. Mark rows and columns
2. Traverse backward
3. Replace elements

Time Complexity:

O(n*m)

Space Complexity:

O(1)

Key Learning:

Using matrix itself as marker removes extra memory usage.