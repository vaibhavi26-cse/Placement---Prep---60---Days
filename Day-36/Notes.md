# Day 35 - Implement Pow() & N-Queens (Recursion and Backtracking)

## 📚 Topics Covered

* Implement Pow(x, n)
* N-Queens Problem
* Recursion
* Divide and Conquer
* Backtracking

Today I explored two classic interview problems. The first focused on optimizing recursion using **Divide and Conquer**, while the second strengthened my understanding of **Backtracking** through the N-Queens problem.

---

# Problem 1 - Implement Pow(x, n)

## 🧠 Problem Statement

Given a base `x` and an exponent `n`, compute

```text
xⁿ
```

Support both positive and negative exponents efficiently.

---

# ❌ Naive Approach

Multiply x exactly n times.

```text
2⁸

2×2×2×2×2×2×2×2
```

### Time Complexity

```text
O(n)
```

Not efficient for very large exponents.

---

# ✅ Optimized Idea (Exponentiation by Squaring)

Instead of calculating every multiplication, divide the exponent into halves.

Example

```text
2⁸

↓

(2⁴)²

↓

((2²)²)²

↓

((2¹)²)²
```

Each recursive call reduces the exponent by half.

---

# Recursive Formula

If n is even

```text
power(x,n)=power(x,n/2)²
```

If n is odd

```text
power(x,n)=x×power(x,n/2)²
```

---

# Handling Negative Exponents

Example

```text
2⁻³

=

1/(2³)

=

1/8
```

Convert

```text
x⁻ⁿ

↓

(1/x)ⁿ
```

before recursion.

---

# Recursion Tree

```text
power(2,8)

        8
        │
        4
        │
        2
        │
        1
        │
        0
```

Only **log₂(n)** recursive calls are made.

---

# Complexity

### Time

```text
O(log n)
```

### Space

```text
O(log n)
```

---

# Concepts Learned

* Divide and Conquer
* Recursive reduction
* Exponentiation by Squaring
* Handling negative exponents
* Logarithmic optimization

---

# Problem 2 - N Queens

## 🧠 Problem Statement

Place **N queens** on an **N × N** chessboard so that no two queens attack each other.

A queen attacks in

* Row
* Column
* Left Diagonal
* Right Diagonal

---

# Key Observation

Since queens are placed **one row at a time**, we only need to check

* Same Column
* Upper Left Diagonal
* Upper Right Diagonal

Checking lower rows is unnecessary because they haven't been processed yet.

---

# Backtracking Strategy

For every row

```text
Try every column

↓

Safe?

↓

Yes

↓

Place Queen

↓

Move to Next Row

↓

Failure?

↓

Remove Queen

↓

Try another column
```

---

# Safety Check

Before placing a queen verify

* Column
* Upper Left Diagonal
* Upper Right Diagonal

If all are clear, place the queen.

---

# Recursive Workflow

```text
Choose Position

↓

Check Safe

↓

Place Queen

↓

Recursive Call

↓

Undo Placement

↓

Try Next Position
```

---

# Example (N = 4)

```text
Row 0

↓

Col 1

↓

Row 1

↓

Col 3

↓

Row 2

↓

Col 0

↓

Row 3

↓

Col 2

↓

Solution Found
```

If any placement becomes invalid, recursion returns and tries another column.

---

# Complexity

### Time

```text
O(N!)
```

### Space

```text
O(N²)
```

---

# Concepts Learned

* Recursive state exploration
* Constraint checking
* Pruning invalid branches
* State restoration
* Chessboard representation

---

# Difference Between Today's Problems

| Implement Pow                  | N Queens                        |
| ------------------------------ | ------------------------------- |
| Divide and Conquer             | Backtracking                    |
| Single recursive path          | Multiple recursive choices      |
| Problem size halves every call | Explore every valid possibility |
| No state restoration           | Requires undo (Backtracking)    |
| O(log n)                       | O(N!)                           |

---

# Patterns Learned

## Divide and Conquer

```text
Problem

↓

Break into Smaller Problem

↓

Solve Recursively

↓

Combine Result
```

Used in

* Binary Search
* Merge Sort
* Quick Sort
* Implement Pow

---

## Backtracking

```text
Choose

↓

Validate

↓

Explore

↓

Undo

↓

Repeat
```

Used in

* Sudoku Solver
* Distinct Permutations
* N Queens
* Rat in a Maze
* Word Search
* Combination Sum

---

# Key Takeaways

✅ Learned **Exponentiation by Squaring** to reduce time complexity from **O(n)** to **O(log n)**.

✅ Understood how Divide and Conquer differs from Backtracking.

✅ Learned to place queens row by row while checking only previously processed rows.

✅ Improved recursive thinking through two different recursion paradigms.

✅ Strengthened understanding of optimization, pruning, and state management.

---

# Problems Solved

* ✔️ Implement Pow(x, n)
* ✔️ N-Queens

---

# Summary

Day 35 introduced two different applications of recursion. The **Implement Pow()** problem demonstrated how Divide and Conquer reduces the problem size to achieve logarithmic complexity. The **N-Queens** problem showcased Backtracking, where multiple possibilities are explored while invalid states are pruned by undoing previous decisions. Together, these problems highlighted the versatility of recursion in solving optimization and search problems commonly asked in coding interviews.
