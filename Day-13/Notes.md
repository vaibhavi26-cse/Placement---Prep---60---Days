# Day 13 Notes

## 1. Rotate Matrix by 90 Degrees

### Problem
Rotate an N×N matrix by 90° clockwise without using extra space.

### Brute Force
Create another matrix and place elements in rotated positions.

Time Complexity: O(n²)

Space Complexity: O(n²)

### Optimal Approach

Steps:

1. Transpose matrix
2. Reverse each row

Example:

Original:

1 2 3
4 5 6
7 8 9

After transpose:

1 4 7
2 5 8
3 6 9

After reversing rows:

7 4 1
8 5 2
9 6 3

Time Complexity: O(n²)

Space Complexity: O(1)

Key Learning:

Transpose converts rows to columns and reversing rows completes clockwise rotation.

---

## 2. Spiral Traversal of Matrix

### Problem

Print matrix elements in spiral order.

### Optimal Approach

Maintain four boundaries:

- top
- bottom
- left
- right

Traversal order:

1. Left → Right
2. Top → Bottom
3. Right → Left
4. Bottom → Top

Shrink boundaries after every traversal.

Example:

1 2 3
4 5 6
7 8 9

Output:

1 2 3 6 9 8 7 4 5

Time Complexity: O(n*m)

Space Complexity: O(1)

Key Learning:

Boundary traversal prevents revisiting elements.