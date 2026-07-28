# Day 33 - Recursion & Backtracking Notes

## 📚 Topic: Recursion and Backtracking

Today I started learning one of the most important problem-solving paradigms in Data Structures and Algorithms—**Recursion** and **Backtracking**. These techniques are widely used in interview questions where we need to explore multiple possibilities efficiently.

---

# 🌟 What is Recursion?

Recursion is a programming technique where a function **calls itself** to solve a smaller instance of the same problem until it reaches a **base case**.

### General Structure

```cpp
returnType function(parameters) {

    // Base Case
    if(condition)
        return;

    // Recursive Call
    function(smaller_problem);
}
```

### Key Concepts

* Every recursive function must have a **Base Case**.
* Each recursive call should move towards the base case.
* After reaching the base case, function calls return one by one (Backtracking phase).
* Uses the **Call Stack** internally.

---

# 🔄 Understanding the Call Stack

When recursion is executed:

1. Function calls are pushed onto the stack.
2. Execution continues until the base case is reached.
3. Functions return in reverse order (Last In, First Out).

Example:

```
func(3)
 ├── func(2)
 │     ├── func(1)
 │     │     ├── func(0)
 │     │     └── return
 │     └── return
 └── return
```

---

# 🌟 What is Backtracking?

Backtracking is an extension of recursion.

It is a technique where we:

1. Make a choice.
2. Explore that choice recursively.
3. If it doesn't lead to the solution, **undo the choice**.
4. Try another possibility.

It follows the pattern:

```
Choose
↓
Explore
↓
Undo (Backtrack)
↓
Try Next Choice
```

---

# 🔁 Generic Backtracking Template

```cpp
bool solve(State) {

    if(solution_found)
        return true;

    for(each possible choice) {

        if(choice is valid) {

            make_choice();

            if(solve(next_state))
                return true;

            undo_choice();   // Backtracking
        }
    }

    return false;
}
```

---

# 🧠 Difference Between Recursion and Backtracking

| Recursion                                                 | Backtracking                                                                         |
| --------------------------------------------------------- | ------------------------------------------------------------------------------------ |
| Solves a problem by dividing it into smaller subproblems. | Explores multiple possible solutions and abandons invalid paths.                     |
| May have only one recursive call.                         | Usually contains multiple recursive choices.                                         |
| Doesn't always undo work.                                 | Always undoes the previous decision before trying another option.                    |
| Used in factorial, Fibonacci, tree traversals.            | Used in Sudoku, N-Queens, Rat in a Maze, Word Search, Permutations, Combination Sum. |

---

# 🧩 Backtracking Workflow

```
Start
   │
Choose an option
   │
Is it valid?
   │
Yes
   │
Go deeper (Recursion)
   │
Solution Found?
   │
Yes → Return
   │
No
   │
Undo Choice
   │
Try Next Choice
```

---

# 🎯 Problem Solved

## ✅ Solve Sudoku

### Approach

* Find an empty cell.
* Try numbers from 1 to 9.
* Check if placing the number is valid.
* Place the number.
* Solve the remaining board recursively.
* If no solution exists, remove the number and try the next one.

### Pattern Learned

```
Find Empty Cell
        ↓
Try 1 → 9
        ↓
Safe?
        ↓
Yes
        ↓
Place Number
        ↓
Recursive Call
        ↓
Failure?
        ↓
Remove Number (Backtrack)
```

---

# 📝 Important Observations

* Every backtracking problem is recursive, but not every recursive problem requires backtracking.
* The **undo step** is what distinguishes backtracking from simple recursion.
* Efficient pruning helps reduce unnecessary recursive calls.
* Backtracking systematically explores all valid possibilities.

---

# 📌 Common Backtracking Problems

* Sudoku Solver
* N-Queens
* Rat in a Maze
* Word Search
* Permutations
* Combination Sum
* M-Coloring Problem
* Palindrome Partitioning
* Generate Parentheses
* Letter Combinations of a Phone Number

---

# 💡 Key Takeaways

* Understand the role of the **base case** before writing recursion.
* Think in terms of **smaller subproblems**.
* In backtracking, always remember the cycle:
  **Choose → Explore → Undo**.
* Practice tracing recursive calls to strengthen understanding.
* Most interview-level backtracking problems follow a similar recursive template with different constraints.

---

# 🚀 Summary

Today I learned the fundamentals of **Recursion** and **Backtracking**. I understood how recursive functions use the call stack, how backtracking explores multiple possibilities by undoing previous choices, and how these concepts are applied to solve complex search problems like **Sudoku**. This topic forms the foundation for many advanced DSA problems frequently asked in coding interviews.
