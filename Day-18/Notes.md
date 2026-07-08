# Day 18 - DSA Notes

## Problem 1: Intersection of Two Arrays (Unique Elements)

### Problem Statement

Given two arrays, find all common elements. The result should contain only unique elements, even if an element appears multiple times in both arrays.

### Approach Used

* Store all elements of the first array in an `unordered_set`.
* Traverse the second array.
* If an element exists in the set:

  * Add it to the answer.
  * Remove it from the set to avoid duplicate entries.

### Why Remove the Element?

Removing the element after adding it to the answer ensures that it is included only once, even if it appears multiple times later in the second array.

### Concepts Learned

* `unordered_set`
* Hashing
* Duplicate elimination
* Set insertion, search, and erase operations

### Time Complexity

* **O(n + m)**

### Space Complexity

* **O(n)**

---

## Problem 2: Union of Two Arrays (Unique Elements)

### Problem Statement

Given two arrays, return all distinct elements present in either array.

### Approach Used

* Create an `unordered_set`.
* Insert all elements from the first array.
* Insert all elements from the second array.
* Convert the set into a vector and return it.

### Why Does This Work?

An `unordered_set` stores only unique values. Any duplicate insertions are ignored automatically.

### Concepts Learned

* Hash Set
* Unique element storage
* Efficient insertion using hashing

### Time Complexity

* **O(n + m)**

### Space Complexity

* **O(n + m)** (Worst case when all elements are unique)

---

# Key Takeaways

* `unordered_set` is one of the easiest and most efficient data structures for handling duplicate elements.
* **Intersection** → Store one array in a set, check the other, and erase after adding.
* **Union** → Insert elements from both arrays into a single set.
* Hashing provides an average time complexity of **O(1)** for insertion, search, and deletion.
* These problems strengthen understanding of hashing, set operations, and optimizing brute-force solutions.
