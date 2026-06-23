# Coding Practice Notes - Problems Solved Today

## 1. Maximum Subarray Sum (Kadane's Algorithm)
Find the maximum sum of a **contiguous** subarray within a one-dimensional numeric array.

### Core Logic
* Tracks two primary values while iterating: the maximum sum ending at the current index, and the absolute highest global sum seen so far.
* At each element, the algorithm decides whether to add the element to the existing subarray sequence or discard the past and start a brand-new subarray.
* **Bugs Fixed Today:** Fixed a critical typo where a single equals sign (`n=1`) accidentally reassigned the array size variable instead of comparing it. Also initialized tracking states with the first array element to handle all-negative inputs correctly.

### Complexity
* **Time Complexity (TC):** $\mathcal{O}(n)$ — Processes the array in a single linear pass.
* **Space Complexity (SC):** $\mathcal{O}(1)$ — Uses a constant amount of memory.

---

## 2. Maximum Product Subarray (Prefix & Suffix Approach)
Find the contiguous subarray that yields the largest mathematical product.

### Core Logic
* Traverses the array from both directions simultaneously: a Prefix pass from left-to-right and a Suffix pass from right-to-left.
* Since any number multiplied by zero becomes zero, hitting a `0` resets the rolling product calculation. The sequence restarts fresh at the next index.
* **Bugs Fixed Today:** Changed the loop initialization boundary to ensure the first and last array elements are not entirely skipped. Also fixed a critical C++ syntax error where a comma operator accidentally threw away the historical maximum value.

### Complexity
* **Time Complexity (TC):** $\mathcal{O}(n)$ — Traverses the data structure exactly once.
* **Space Complexity (SC):** $\mathcal{O}(1)$ — No extra arrays or data structures are allocated.

---

## 3. Maximum Circular Subarray Sum
Find the maximum subarray sum where the array is treated as a circular ring, allowing wrapping from the end back to the beginning.

### Core Logic
* The maximum sum falls into one of two scenarios: either it is a normal subarray located entirely in the middle, or it wraps around the edges.
* The circular maximum is calculated by subtracting the worst-performing continuous block (Minimum Subarray Sum) from the Total Array Sum.
* **Bugs Fixed Today:** Resolved an infinite loop bug caused by a missing loop increment condition. Corrected a variable initialization mistake where a semicolon cut off the declarations. Implemented an edge-case check to prevent returning an empty/zero value when all array elements are negative.

### Complexity
* **Time Complexity (TC):** $\mathcal{O}(n)$ — Finds the total sum, minimum subarray, and maximum subarray in one sweep.
* **Space Complexity (SC):** $\mathcal{O}(1)$ — Only a few primitive scalar tracking variables are used.

---

## 4. First Missing Positive Integer (Sorting Approach)
Find the smallest positive integer ($1, 2, 3, \dots$) that is completely absent from an unsorted array.

### Core Logic
* Arranges the elements in ascending order first.
* Uses an expected target counter initialized at `1`. As the loop encounters numbers matching this target, the expected counter increments by one.
* Any values that are negative, zero, or duplicate instances of a number already processed are safely ignored.
* **Bugs Fixed Today:** Removed Java native collection sorting syntax that was mistakenly placed inside a C++ structure. Patched the logic to prevent duplicate positive numbers from stalling the target counter.

### Complexity
* **Time Complexity (TC):** $\mathcal{O}(n \log n)$ — Dominated by the initial sorting algorithm step runtime.
* **Space Complexity (SC):** $\mathcal{O}(1)$ or $\mathcal{O}(\log n)$ — Depends entirely on the internal call stack requirements of the language's native sort function.