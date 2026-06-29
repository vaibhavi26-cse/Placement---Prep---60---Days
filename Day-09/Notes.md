# Day 09 - Revision Notes 📚

## 60 Days Placement Preparation

Date: **/**/____

Goal:
Revision of previously solved GFG 160 Sheet problems instead of solving new questions.

---

# Problem 1: Second Largest Element

### Pattern:

Array Traversal

### Approach:

* Maintain largest and secondLargest
* Traverse array once
* Update accordingly

### Time Complexity:

O(n)

### Space Complexity:

O(1)

### Key Observation:

No sorting required.

### Mistakes to avoid:

* Duplicate largest elements
* Edge cases with all equal elements

---

# Problem 2: Reverse Array

### Pattern:

Two Pointer

### Approach:

* Use start and end pointers
* Swap elements until start < end

### Time Complexity:

O(n)

### Space Complexity:

O(1)

### Key Observation:

In-place swapping reduces space.

---

# Problem 3: Rotate Array by One

### Pattern:

Array Manipulation

### Approach:

* Store last element
* Shift remaining elements
* Place stored element at first position

### Time Complexity:

O(n)

### Space Complexity:

O(1)

### Key Observation:

Temporary variable needed.

---

# Problem 4: Check Sorted Array

### Pattern:

Linear Traversal

### Approach:

* Compare arr[i] with arr[i+1]

### Time Complexity:

O(n)

### Space Complexity:

O(1)

### Key Observation:

Single violation means array is unsorted.

---

# Problem 5: Remove Duplicates

### Pattern:

Two Pointer

### Approach:

* Slow pointer tracks unique values
* Fast pointer scans array

### Time Complexity:

O(n)

### Space Complexity:

O(1)

### Key Observation:

Works because array is sorted.

---

# Problem 6: Move Zeros To End

### Pattern:

Two Pointer

### Approach:

* Maintain position of non-zero element
* Swap non-zero values

### Time Complexity:

O(n)

### Space Complexity:

O(1)

### Key Observation:

Maintain relative order.

---

# Problem 7: Missing Number

### Pattern:

Math/XOR

### Formula:

Expected Sum = n(n+1)/2

Missing Number:
Expected Sum - Actual Sum

Alternative:
Use XOR

### Time Complexity:

O(n)

### Space Complexity:

O(1)

---

# Problem 8: Union of Arrays

### Pattern:

Two Pointer

### Approach:

* Traverse both arrays together
* Avoid duplicates

### Time Complexity:

O(n+m)

### Space Complexity:

O(n+m)

---

# Problem 9: Count Inversions

### Pattern:

Merge Sort

### Approach:

* Divide array
* Count inversions during merge

### Time Complexity:

O(n log n)

### Space Complexity:

O(n)

### Key Observation:

When left > right:
Inversions += (mid-i+1)

---

# Revision Observations 📝

Patterns revised today:

✔ Array Traversal
✔ Two Pointer
✔ Sorting Concepts
✔ Merge Sort
✔ Mathematical Optimization
✔ XOR Tricks
✔ In-place Manipulation

---

# Mistakes I repeatedly make

□ Missing edge cases

□ Wrong pointer updates

□ Forgetting duplicate handling

□ Confusing time complexity

□ Small indexing mistakes

---

Day 09 Note:

No new problem solved today, but revision is also progress. Understanding old mistakes strengthens future solutions.
