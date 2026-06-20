# Day 1 Notes 🚀

Date: 20 June 2026

Topics Covered:

* Arrays
* Two Pointer Technique
* Swapping
* Edge Case Handling

---

## Problem 1: Second Largest Element

Approach Used:

* Maintained two variables:

  * max1 → largest element
  * max2 → second largest element
* Traversed array once and updated values accordingly.

Time Complexity:
O(n)

Space Complexity:
O(1)

Challenges Faced:

* Duplicate values caused incorrect answers.
  Example:
  {10,5,10}

* Handling cases where all elements are same:
  Example:
  {12,12,12}

* Handling negative numbers without using extra libraries.

Learned:
Need to think about edge cases before assuming the logic is complete.

---

## Problem 2: Move Zeroes To End

Approach Used:

* Used Two Pointer Technique.
* One pointer traversed the array.
* One pointer placed non-zero elements at the beginning.
* Filled remaining positions with zeros.

Time Complexity:
O(n)

Space Complexity:
O(1)

Challenges Faced:

* Initially tried shifting elements directly.
* Faced confusion regarding overwriting array elements.
* Learned that keeping track of positions using pointers makes implementation easier.

Learned:
Two Pointer Technique can optimize array problems significantly.

---

## Problem 3: Reverse Array

Approach Used:

* Used two pointers:

  * One from beginning
  * One from end
* Swapped elements until middle reached.

Time Complexity:
O(n)

Space Complexity:
O(1)

Challenges Faced:

* Initially overwrote values instead of swapping.
* Loop was traversing entire array instead of half.

Learned:
Swapping is required instead of direct assignment.

---

Day 1 Summary:

Problems Solved: 3

Patterns Learned:

* Two Pointers
* Swapping
* Edge Case Analysis

Progress:
3/13 Array Problems Completed

Takeaway:
Consistency matters more than solving many problems in one day.
