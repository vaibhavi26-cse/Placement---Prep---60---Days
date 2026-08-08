# Day 49 – Binary Trees (Level Order Traversal, Height & Diameter)

## 1. Level Order Traversal

### Idea

Traverse the tree level by level using **Breadth First Search (BFS)**.

### Algorithm

1. Push the root into a queue.
2. While the queue is not empty:

   * Pop the front node.
   * Store its value.
   * Push its left child.
   * Push its right child.
3. Return the traversal.

### Data Structure Used

* Queue

### Complexity

* Time: **O(N)**
* Space: **O(N)**

### Important Points

* BFS visits nodes level by level.
* Queue maintains the traversal order.
* Every node is processed exactly once.

---

# 2. Height of Binary Tree

### Definition

Height is the **number of edges** on the longest path from the root to a leaf.

### Recursive Formula

Height(node)

= 1 + max(Height(left), Height(right))

### Base Case

Height(NULL) = -1

(Returning -1 ensures a leaf node has height 0 when height is measured in edges.)

### Complexity

* Time: **O(N)**
* Space: **O(H)**

where H is the tree height.

### Important Points

* Recursive DFS is the simplest solution.
* Visit both subtrees before computing the current node's height.
* Height depends on the deeper subtree.

---

# 3. Diameter of Binary Tree

### Definition

Diameter is the **maximum number of edges** on the longest path between any two nodes.

The path:

* may pass through the root,
* or may lie entirely inside one subtree.

### Optimal Approach

For every node:

* Compute left subtree height.
* Compute right subtree height.
* Possible diameter through that node:

leftHeight + rightHeight + 2

Update the global maximum diameter.

### Complexity

* Time: **O(N)**
* Space: **O(H)**

### Important Points

* Compute height and diameter together in one DFS traversal.
* Avoid calculating height repeatedly, which would increase complexity to O(N²).
* Use a separate variable (e.g., `ans`) to store the maximum diameter.

---

# Concepts Revised Today

✅ Breadth First Search (BFS)

✅ Queue in Trees

✅ Depth First Search (DFS)

✅ Recursive Tree Traversal

✅ Tree Height (Edges)

✅ Diameter Calculation

✅ Single Traversal Optimization

---

# Common Mistakes

* Forgetting to check if the root is NULL.
* Returning 0 instead of -1 when the problem defines height using edges.
* Recomputing heights for every node (O(N²)).
* Naming a member variable and member function with the same identifier (e.g., `diameter`), causing compilation errors.
* Forgetting to include `<algorithm>` for `max()`.

---

# Interview Takeaways

* BFS → Queue
* DFS → Recursion/Stack
* Height is frequently used as a helper function.
* Diameter can be solved optimally by combining height computation with diameter updates.
* Understanding whether a problem measures **height in edges or nodes** is essential before coding.
