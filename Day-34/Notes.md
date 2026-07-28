# Day 34 - Distinct Permutations (Backtracking)

## 📚 Topic

**Recursion + Backtracking (Generating Distinct Permutations)**

Today I learned how to generate **all unique permutations** of a string that may contain duplicate characters. This problem extends the basic permutation generation technique by introducing a strategy to avoid duplicate results.

---

# 🧠 Problem Statement

Given a string `s`, generate all **distinct permutations** of the string in lexicographical order.

Example:

```text
Input:
AAB

Output:
AAB
ABA
BAA
```

Without handling duplicates, the recursion would generate repeated permutations.

---

# 🔑 Core Idea

We build the permutation **one character at a time**.

At every recursive call:

* Choose an unused character.
* Mark it as visited.
* Add it to the current permutation.
* Recurse for the remaining positions.
* Undo the choice (Backtrack).

---

# ✨ Why Sort the String?

Before recursion, sort the string.

```cpp
sort(s.begin(), s.end());
```

Sorting places duplicate characters together.

Example:

```text
BAA
↓

AAB
```

This makes it easy to detect duplicates.

---

# 🚫 Avoiding Duplicate Permutations

The most important condition is:

```cpp
if(i > 0 && s[i] == s[i-1] && !used[i-1])
    continue;
```

### Meaning

If:

* current character equals the previous one
* previous identical character has **not** been used

then skip the current character.

This ensures that duplicate branches are never explored.

---

# 🔄 Backtracking Process

```text
Start
   │
Choose unused character
   │
Mark visited
   │
Add to answer
   │
Recursive Call
   │
Remove character
   │
Mark unvisited
```

---

# 📝 Backtracking Template

```cpp
Choose
↓

Mark Visited

↓

Recursive Call

↓

Undo Choice

↓

Try Next Choice
```

---

# 🧩 Example

Input

```text
AAB
```

Recursive Tree

```text
           ""
        /       \
      A           B
    /   \        /
   A     B      A
   |     |      |
   B     A      A
```

Generated permutations

```text
AAB
ABA
BAA
```

Duplicates like

```text
AAB
AAB
```

are automatically skipped.

---

# ⏱ Complexity

### Time Complexity

```
O(N × N!)
```

* There are at most **N!** permutations.
* Each permutation takes **O(N)** to build.

---

### Space Complexity

```
O(N)
```

* Visited array
* Current permutation
* Recursive call stack

(Result vector is not counted.)

---

# 📌 Concepts Learned

* Recursion builds solutions level by level.
* Backtracking explores every possible arrangement.
* Sorting helps group duplicate characters.
* Visited array ensures each character is used once.
* Duplicate-skipping condition prevents repeated permutations.
* Undoing changes after recursion is the essence of backtracking.

---

# 🎯 Pattern Recognized

Most permutation problems follow this pattern:

```text
Choose

↓

Mark

↓

Recurse

↓

Unmark

↓

Backtrack
```

Only the validity condition changes depending on the problem.

---

# 🚀 Key Takeaways

✅ Learned permutation generation using recursion.

✅ Understood the importance of backtracking.

✅ Learned how sorting helps eliminate duplicate branches.

✅ Mastered the duplicate-skipping condition.

✅ Strengthened understanding of recursive state management using a visited array.

---

# 📖 Problems Solved

* ✔️ Distinct Permutations

---

# 💡 Summary

Today I learned how to generate all unique permutations using recursion and backtracking. I understood how to use a visited array, why sorting is required before recursion, and how a simple duplicate-skipping condition prevents repeated permutations. This problem strengthened my understanding of state management and pruning in backtracking algorithms.
