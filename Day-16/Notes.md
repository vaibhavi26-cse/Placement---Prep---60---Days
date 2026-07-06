# Day 16 - DSA Revision Notes

## Topic 1: Hashing (HashMap / HashSet)

### Purpose

Hashing helps perform fast searching, insertion, and deletion operations.

### Common Uses

* Frequency counting
* Finding duplicates
* Two Sum problems
* Checking existence of elements
* Storing key-value pairs

### Time Complexity

| Operation | Average Case |
| --------- | ------------ |
| Insert    | O(1)         |
| Search    | O(1)         |
| Delete    | O(1)         |

### C++ Libraries

```cpp id="8x6drp"
#include <unordered_map>
#include <unordered_set>
```

### Pattern

```cpp id="n7k4y1"
unordered_set<int> s;

for(int num : arr){
    if(s.find(num)!=s.end()){
        // element found
    }
    s.insert(num);
}
```

---

# Topic 2: Matrix Traversal Patterns

### Basic Traversal

Visit each element row-wise.

```cpp id="rm8dn4"
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        cout<<arr[i][j]<<" ";
    }
}
```

Time Complexity:
O(rows × cols)

---

### Common Matrix Patterns

1. Row-wise traversal
2. Column-wise traversal
3. Boundary traversal
4. Spiral traversal
5. Diagonal traversal
6. Zig-zag traversal

---

# Topic 3: Two Pointer Technique

### Purpose

Used to reduce nested loop complexity.

### Common Uses

* Two Sum
* Remove duplicates
* Reverse array
* Move zeros
* Sorted array problems

### Pattern

```cpp id="x4pw2a"
int left=0;
int right=n-1;

while(left<right){

    if(condition){
        left++;
    }
    else{
        right--;
    }
}
```

### Time Complexity

O(n)

---

# Key Learning of Day 16

* Revision improves pattern recognition.
* Similar approaches can solve multiple problems.
* Understanding complexity is as important as solving the problem.
* Strong concepts reduce mistakes during coding and interviews.
