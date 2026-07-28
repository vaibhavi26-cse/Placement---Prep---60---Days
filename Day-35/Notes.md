# Day 35 - N-Queens Problem (Backtracking)

## 📚 Topic

**Backtracking - N Queens Problem**

Today I learned one of the most famous backtracking problems: **N-Queens**. This problem strengthened my understanding of recursion, state management, and constraint checking while exploring multiple possibilities.

---

# 🧠 Problem Statement

Place **N queens** on an **N × N chessboard** such that no two queens attack each other.

A queen can attack:

* Horizontally (Row)
* Vertically (Column)
* Diagonally

The goal is to generate all possible valid board configurations.

---

# ♟ Queen's Attack Directions

```text
          ↖ ↑ ↗
           \|/
      ←  Queen  →
           /|\
          ↙ ↓ ↘
```

Since we place queens **row by row**, we only need to check:

* Same column
* Upper-left diagonal
* Upper-right diagonal

There is no need to check the current row or lower rows because they have not been processed yet.

---

# 🔑 Core Idea

For every row:

1. Try placing a queen in every column.
2. Check whether placing it is safe.
3. If safe:

   * Place the queen.
   * Move to the next row recursively.
4. If it doesn't lead to a solution:

   * Remove the queen (Backtrack).
   * Try another column.

---

# 🔄 Backtracking Flow

```text
Start Row

↓

Try Every Column

↓

Safe?

↓

Yes

↓

Place Queen

↓

Recursive Call (Next Row)

↓

Failure?

↓

Remove Queen

↓

Try Next Column
```

---

# 🛡 Safety Check

Before placing a queen, verify:

### ✅ Same Column

```cpp
for(int i = row; i >= 0; i--)
```

---

### ✅ Upper Left Diagonal

```cpp
while(r >= 0 && c >= 0)
```

---

### ✅ Upper Right Diagonal

```cpp
while(r >= 0 && c < n)
```

If none contain a queen, the position is safe.

---

# 🌳 Recursive Tree (N = 4)

```text
Row 0
│
├── Col 0
│      │
│      ├── Col 2
│      │      ✖
│      │
│      └── Col 3
│             │
│             ...
│
├── Col 1
│      │
│      ✔ Solution
│
├── Col 2
│      │
│      ✔ Solution
│
└── Col 3
```

Whenever a path becomes invalid, recursion returns and tries another placement.

---

# 📝 Generic Backtracking Pattern

```text
Choose Position

↓

Check Safety

↓

Place Queen

↓

Recursive Call

↓

Remove Queen

↓

Try Next Position
```

---

# ⏱ Complexity

### Time Complexity

```text
O(N!)
```

Each row explores possible columns, but pruning significantly reduces invalid branches.

---

### Space Complexity

```text
O(N²)
```

* Chessboard storage
* Recursive stack up to N levels

---

# 📌 Concepts Learned

* Recursive decision-making.
* Constraint checking before every move.
* State restoration using backtracking.
* Board representation using strings.
* Efficient pruning by checking only previously processed rows.

---

# 🎯 Pattern Recognized

This problem follows the classic backtracking structure:

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

The only difference between backtracking problems is **how validity is checked**.

---

# 📚 Similar Problems

* Sudoku Solver
* Distinct Permutations
* Rat in a Maze
* Word Search
* Combination Sum
* Palindrome Partitioning
* M-Coloring Problem

---

# 💡 Key Takeaways

✅ Learned how to represent a chessboard using a vector of strings.

✅ Understood why checking only previous rows is sufficient.

✅ Strengthened recursion and backtracking skills.

✅ Learned how constraint checking reduces unnecessary recursion.

✅ Improved understanding of search-space pruning.

---

# 📖 Problems Solved

* ✔️ N-Queens

---

# 🚀 Summary

Today I solved the **N-Queens** problem using recursion and backtracking. I learned how to place queens row by row, validate every move using column and diagonal checks, and backtrack whenever a placement leads to an invalid state. This problem reinforced the importance of recursive exploration, state restoration, and pruning, making it one of the foundational backtracking problems for coding interviews.
