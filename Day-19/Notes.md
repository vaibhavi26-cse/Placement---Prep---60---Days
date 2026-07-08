# Day 19 - DSA Notes

## Problem 1: Longest Consecutive Subsequence

### Problem Statement

Given an array of non-negative integers, find the length of the longest subsequence containing consecutive integers. The consecutive elements can appear in any order in the array.

### Approach Used

* Insert all elements into an `unordered_set` for O(1) average lookup.
* Traverse each element in the array.
* Consider an element as the **start of a sequence** only if `(num - 1)` is not present in the set.
* Count consecutive elements by checking `num + 1`, `num + 2`, and so on.
* Update the maximum sequence length.

### Key Observation

To avoid counting the same sequence multiple times, start counting only from elements that do not have a predecessor (`num - 1`) in the set.

### Concepts Learned

* `unordered_set`
* Hashing
* Sequence detection
* Optimizing brute-force using hash lookups

### Time Complexity

* **O(n)** (Average Case)

### Space Complexity

* **O(n)**

---

## Problem 2: Group Anagrams

### Problem Statement

Given an array of strings, group together all strings that are anagrams of each other while maintaining their original order within each group.

### Approach Used

* Create an `unordered_map<string, vector<string>>`.
* For every string:

  * Create a copy of the string.
  * Sort the copied string.
  * Use the sorted string as the key in the hash map.
  * Store the original string in the corresponding group.
* Return all groups stored in the map.

### Key Observation

All anagrams produce the same sorted string, making it an ideal key for grouping.

Example:

* `"act"` → `"act"`
* `"cat"` → `"act"`
* `"tac"` → `"act"`

All three belong to the same group.

### Concepts Learned

* Hash Maps
* String Sorting
* Anagram Detection
* Grouping similar data using keys

### Time Complexity

* **O(n × k log k)**

Where:

* **n** = Number of strings
* **k** = Maximum length of a string

### Space Complexity

* **O(n × k)**

---

# Key Takeaways

* `unordered_set` is highly effective for solving sequence-based problems with constant-time average lookups.
* Always identify the **starting point** of a sequence to eliminate unnecessary computations.
* Sorting strings provides a unique signature for detecting anagrams.
* `unordered_map` is a powerful data structure for grouping related elements efficiently.
* Hashing continues to be one of the most important techniques for optimizing array and string problems.
