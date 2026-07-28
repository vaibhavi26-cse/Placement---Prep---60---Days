# Day 37 - Sudoku Solver (Backtracking)

## 📚 Topic

**Backtracking - Sudoku Solver**

Today I learned how to solve the classic **Sudoku Solver** problem using **Backtracking**. This problem is a great example of exploring multiple possibilities while pruning invalid choices early.

---

# 🧠 Problem Statement

Given a **9 × 9 Sudoku board**, fill all the empty cells (`0`) such that:

* Every row contains digits **1 to 9** exactly once.
* Every column contains digits **1 to 9** exactly once.
* Every **3 × 3** subgrid contains digits **1 to 9** exactly once.

There is guaranteed to be a unique solution.

---

# 🔑 Core Idea

Instead of trying every possible board configuration, we:

1. Find the first empty cell.
2. Try placing digits **1 to 9**.
3. Check whether the placement is valid.
4. If valid, move to the next empty cell recursively.
5. If no number works, undo the placement (Backtrack).

---

# 🔄 Backtracking Workflow

```text
Find Empty Cell
       │
       ▼
Try Numbers (1 - 9)
       │
       ▼
Is Safe?
   ┌───┴────┐
  Yes      No
   │         │
Place      Try Next Number
   │
   ▼
Recursive Call
   │
   ▼
Solved?
   ┌───┴────┐
  Yes      No
   │         │
 Return   Remove Number
             │
             ▼
      Try Next Choice
```

---

# 🛡 Safety Check

Before placing a number, verify that it does **not** already exist in:

### ✅ Same Row

```cpp
for(int j = 0; j < 9; j++)
```

---

### ✅ Same Column

```cpp
for(int i = 0; i < 9; i++)
```

---

### ✅ Same 3 × 3 Subgrid

```cpp
int startRow = row - row % 3;
int startCol = col - col % 3;
```

Traverse the corresponding 3 × 3 box and ensure the number is not present.

---

# 📦 Finding the 3 × 3 Box

Every cell belongs to one of the nine subgrids.

Example:

```text
+-------+-------+-------+
| (0,0) | (0,3) | (0,6) |
|       |       |       |
+-------+-------+-------+
| (3,0) | (3,3) | (3,6) |
|       |       |       |
+-------+-------+-------+
| (6,0) | (6,3) | (6,6) |
|       |       |       |
+-------+-------+-------+
```

Top-left corner of the box:

```cpp
startRow = row - row % 3;
startCol = col - col % 3;
```

Example:

```text
Cell = (5,7)

startRow = 5 - (5 % 3) = 3
startCol = 7 - (7 % 3) = 6
```

So the cell belongs to the subgrid starting at **(3,6)**.

---

# 🌳 Recursive Decision Tree

```text
Empty Cell

├── Try 1
│      │
│      ✖ Invalid
│
├── Try 2
│      │
│      ✔ Valid
│      │
│      ├── Next Empty Cell
│      │
│      ├── Try Numbers Again
│      │
│      └── Failure?
│             │
│             ▼
│        Remove 2
│
└── Try 3
```

Every invalid path is abandoned, and recursion returns to try another possibility.

---

# 📝 Generic Backtracking Template

```text
Find Decision

↓

Try Every Choice

↓

Validate

↓

Make Choice

↓

Recursive Call

↓

Undo Choice

↓

Repeat
```

---

# ⚡ Optimized Approach

The basic solution checks the row, column, and subgrid every time a number is placed.

A more optimized approach maintains three lookup tables:

* Row lookup
* Column lookup
* Box lookup

This reduces the safety check from **O(9 + 9 + 9)** to **O(1)**, significantly improving performance on larger search spaces.

---

# ⏱ Complexity

### Naive Backtracking

**Time Complexity**

```text
O(9^(Empty Cells))
```

In the worst case, every empty cell can try all 9 digits.

---

**Space Complexity**

```text
O(81)
```

Recursion depth is at most 81 cells.

---

# 📌 Concepts Learned

* Recursive search over multiple possibilities.
* Constraint satisfaction using validity checks.
* State restoration through backtracking.
* Importance of pruning invalid branches.
* Working with 2D grids and subgrids.
* Optimizing recursive solutions using lookup arrays.

---

# 🎯 Pattern Recognized

Sudoku follows the classic backtracking pattern:

```text
Find Empty Cell

↓

Try Every Number

↓

Check Validity

↓

Place Number

↓

Recursive Call

↓

Undo Placement

↓

Try Next Number
```

The only thing that changes from one backtracking problem to another is the **validation logic**.

---

# 🔍 Comparison with Previous Backtracking Problems

| Problem               | Decision              | Validation                      |
| --------------------- | --------------------- | ------------------------------- |
| Distinct Permutations | Choose next character | Skip duplicates & check visited |
| N-Queens              | Place queen           | Column & diagonal checks        |
| Sudoku Solver         | Place digit           | Row, column & 3×3 box checks    |

---

# 📚 Similar Problems

* N-Queens
* Distinct Permutations
* Rat in a Maze
* Word Search
* Combination Sum
* Palindrome Partitioning
* M-Coloring Problem

---

# 💡 Key Takeaways

* Every empty cell represents a recursive decision.
* A solution is built incrementally while satisfying Sudoku constraints.
* Backtracking explores all valid possibilities and discards invalid ones early.
* Efficient pruning is the key to solving complex search problems.
* Lookup tables can greatly improve the performance of backtracking solutions.

---

# 📖 Problem Solved

* ✔️ Sudoku Solver

---

# 🚀 Summary

Today I solved the **Sudoku Solver** problem using **Backtracking**. I learned how to recursively fill empty cells while validating every placement using row, column, and 3×3 subgrid constraints. Whenever a placement led to an invalid configuration, I restored the previous state and explored another possibility. This problem reinforced the importance of recursive exploration, pruning, and state restoration, making it one of the most important backtracking problems for coding interviews.
