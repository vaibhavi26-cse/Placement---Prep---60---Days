# Day 46 – Remove Cycle in Linked List

## Problem
Remove the loop from a linked list without losing any nodes.

## Approach
- Detect cycle using Floyd's Cycle Detection.
- If no cycle exists, return.
- Move one pointer to head.
- Find the node just before the starting node of the loop.
- Break the loop by setting next = NULL.

## Time Complexity
O(N)

## Space Complexity
O(1)

## Concepts Learned
- Floyd's Algorithm
- Loop removal
- Pointer manipulation
- Edge case when loop starts from head