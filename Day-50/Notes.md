# Day 50 – Binary Trees (Mirror Tree & Construct Tree from Inorder and Preorder)

## 1. Mirror Tree

### Idea

Convert a binary tree into its **mirror tree** by swapping the left and right child of every node.

### Algorithm

1. If the current node is `NULL`, return.
2. Swap the left and right children of the current node.
3. Recursively mirror the left subtree.
4. Recursively mirror the right subtree.

### Example

Original:

        1
       / \
      2   3
         /
        4

Mirror:

        1
       / \
      3   2
     /
    4

### Technique Used

- Recursion
- Tree Traversal

### Complexity

- Time: **O(N)**
- Space: **O(H)**

where H is the height of the tree.

### Important Points

- Every node needs to be processed once.
- Swapping must be performed at every node.
- The tree is modified **in-place**.
- Base case is `root == NULL`.

---

# 2. Construct Tree from Inorder & Preorder

### Idea

Construct the original binary tree using its **inorder** and **preorder** traversals.

The main observation is:

- **Preorder** → identifies the root.
- **Inorder** → separates the left and right subtrees.

### Traversal Properties

**Preorder:**

    Root → Left → Right

Therefore, the first unused element of preorder is the root.

**Inorder:**

    Left → Root → Right

After finding the root in inorder:

- Elements before it → Left subtree
- Elements after it → Right subtree

### Algorithm

1. Take the current element from preorder as the root.
2. Find the root's position in inorder.
3. Recursively construct the left subtree.
4. Recursively construct the right subtree.
5. Continue until the inorder range becomes invalid.

### Optimization

Use a **Hash Map** to store the index of every element in the inorder array.

This avoids searching the inorder array repeatedly.

### Data Structures Used

- Recursion
- Hash Map (`unordered_map`)

### Complexity

- Time: **O(N)**
- Space: **O(N)**

### Important Points

- Maintain a `preIndex` to track the current preorder element.
- Preorder determines the order in which nodes are created.
- Inorder determines the boundaries of left and right subtrees.
- Hash Map provides **O(1) average lookup** for the root's inorder position.
- Unique values are required to construct the tree unambiguously.

---

# Concepts Revised Today

✅ Binary Tree Recursion

✅ Tree Traversal

✅ Inorder Traversal

✅ Preorder Traversal

✅ Binary Tree Construction

✅ Mirror Tree

✅ Hash Map

✅ Recursive Tree Construction

---

# Common Mistakes

- Using `node` when the parameter is named `root`.
- Forgetting the `NULL` base case.
- Swapping children only once instead of recursively for every node.
- Confusing the roles of inorder and preorder.
- Forgetting to increment `preIndex`.
- Using incorrect inorder boundaries.
- Searching the inorder array repeatedly without optimization.

---

# Interview Takeaways

- Mirror Tree → **Swap left and right recursively**
- Preorder → **Root identification**
- Inorder → **Left/Right subtree separation**
- Hash Map → **Fast inorder index lookup**
- Recursion → **Build and process subtrees independently**
- Combining preorder and inorder is a classic binary tree construction problem.

### Key Learning

> **Preorder tells us the root, while Inorder tells us how to divide the tree.**