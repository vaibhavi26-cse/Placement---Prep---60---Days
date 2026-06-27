# Day Notes – Arrays / Intervals Problems 🚀

## 1. Count Inversions

### Problem

Count pairs `(i,j)` such that:

```cpp
i<j && arr[i]>arr[j]
```

Example:

```cpp
arr={2,4,1,3,5}
```

Inversions:

```cpp
(2,1)
(4,1)
(4,3)
```

Answer:

```cpp
3
```

### Approach Used

Merge Sort + Counting inversions

### Core Idea

While merging two sorted halves:

```cpp
if(arr[left]>arr[right])
```

then all remaining elements from `left` to `mid` also create inversions.

Formula:

```cpp
count += mid-left+1
```

Reason:

Left half is already sorted.

### Time Complexity

```cpp
O(nlogn)
```

### Space Complexity

```cpp
O(n)
```

### Important Learning

Do not count one-by-one.

Count all inversions together:

```cpp
mid-left+1
```

---

## 2. Merge Overlapping Intervals

### Problem

Merge all overlapping intervals.

Example:

```cpp
[[1,3],[2,6],[8,10],[15,18]]
```

Output:

```cpp
[[1,6],[8,10],[15,18]]
```

### Approach

1. Sort intervals
2. Push first interval
3. Traverse remaining intervals
4. Check overlap

Condition:

```cpp
intervals[i][0]<=ans.back()[1]
```

If overlap:

```cpp
ans.back()[1]=max(
ans.back()[1],
intervals[i][1]
)
```

Else:

```cpp
ans.push_back(intervals[i])
```

### Time Complexity

```cpp
O(nlogn)
```

### Space Complexity

```cpp
O(n)
```

### Important Learning

```cpp
ans.back()
```

means:

```cpp
Last interval inside answer vector
```

---

## 3. Insert Interval

### Problem

Insert a new interval and merge if required.

Example:

```cpp
intervals=[[1,2],[3,5],[6,7],[8,10],[12,16]]

newInterval=[4,8]
```

Output:

```cpp
[[1,2],[3,10],[12,16]]
```

### Approach

Three steps:

### Step 1

Add intervals before overlap

```cpp
while(intervals[i][1]<newInterval[0])
```

### Step 2

Merge overlapping intervals

```cpp
while(intervals[i][0]<=newInterval[1])
```

Update:

```cpp
newInterval[0]=min(
newInterval[0],
intervals[i][0]
)

newInterval[1]=max(
newInterval[1],
intervals[i][1]
)
```

### Step 3

Add remaining intervals

### Time Complexity

```cpp
O(n)
```

### Space Complexity

```cpp
O(n)
```

### Important Learning

```cpp
newInterval[0]
```

means:

```cpp
starting value
```

```cpp
newInterval[1]
```

means:

```cpp
ending value
```

---

## 4. Non-overlapping Intervals (Minimum Removals)

### Problem

Remove minimum intervals so remaining intervals do not overlap.

Example:

```cpp
[[1,2],[2,3],[3,4],[1,3]]
```

Answer:

```cpp
1
```

### Approach

Sort intervals.

Initialize:

```cpp
end=intervals[0][1]
count=0
```

Traverse:

```cpp
if(intervals[i][0]<end)
```

Overlap exists:

```cpp
count++

end=min(
end,
intervals[i][1]
)
```

Else:

```cpp
end=intervals[i][1]
```

### Why use minimum ending time?

Smaller ending interval leaves more space for future intervals.

### Time Complexity

```cpp
O(nlogn)
```

### Space Complexity

```cpp
O(1)
```

### Important Learning

Keep interval with:

```cpp
smaller ending time
```

because it maximizes future choices.

---

# Revision Keywords

Count Inversion:

```cpp
mid-left+1
```

Merge Intervals:

```cpp
ans.back()
```

Insert Interval:

```cpp
3 steps:
Before overlap
Merge overlap
After overlap
```

Non-overlapping Interval:

```cpp
Keep smaller end
```
