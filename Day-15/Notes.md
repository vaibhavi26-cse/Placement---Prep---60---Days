# Two Sum Problem Notes

## Problem

Given an array `arr[]` and an integer `target`, determine whether there exist two distinct elements whose sum equals `target`.

---

## Approach 1: HashSet (Optimal)

### Idea

* Traverse the array.

* For each element, calculate:

  `complement = target - currentElement`

* Check if the complement already exists in the HashSet.

* If found → return `true`

* Otherwise insert the current element.

### Code Logic

```cpp
unordered_set<int> s;

for(int num : arr){
    int complement = target - num;

    if(s.find(complement) != s.end()){
        return true;
    }

    s.insert(num);
}

return false;
```

### Time Complexity

O(n)

### Space Complexity

O(n)

### Required Library

```cpp
#include <unordered_set>
```

---

## Approach 2: Sorting + Two Pointers

### Idea

* Sort the array.

* Take:

  * left = 0
  * right = n-1

* Calculate:

  `sum = arr[left] + arr[right]`

* If sum == target → return true

* If sum < target → move left++

* If sum > target → move right--

### Code Logic

```cpp
sort(arr.begin(), arr.end());

int left = 0;
int right = arr.size()-1;

while(left < right){
    int sum = arr[left] + arr[right];

    if(sum == target)
        return true;
    else if(sum < target)
        left++;
    else
        right--;
}

return false;
```

### Time Complexity

O(n log n)

### Space Complexity

O(1)

### Required Library

```cpp
#include <algorithm>
```

---

## Comparison

HashSet:

* Faster
* More memory usage

Two Pointers:

* Less memory usage
* Requires sorting
