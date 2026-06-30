# Day 11 Notes - Binary Search Problems

## Number of Occurrence
- Find first occurrence using binary search
- Find last occurrence using binary search
- Answer = last - first + 1
- Time Complexity: O(log n)

## Sorted and Rotated Minimum
- Compare arr[mid] with arr[high]
- If arr[mid] > arr[high], minimum lies right
- Else minimum lies left including mid
- Time Complexity: O(log n)

## Search in Rotated Sorted Array
- Find which half is sorted
- Check if target lies in sorted half
- Discard the other half
- Time Complexity: O(log n)

## Peak Element
- If arr[mid] < arr[mid+1], move right
- Else move left including mid
- Peak always exists
- Time Complexity: O(log n)

## Patterns Observed
1. Identify sorted region
2. Eliminate half every iteration
3. Carefully handle low/high updates
4. Use low + (high-low)/2 to avoid overflow
