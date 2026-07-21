# Day 30 - Container With Most Water

## Problem Solved

- Container With Most Water

---

## Pattern Used

- Two Pointers

---

## Key Idea

Area = min(height[left], height[right]) × width

Always move the pointer having the smaller height because moving the taller one can never increase the area while the width decreases.

---

## Algorithm

1. Place pointers at both ends.
2. Compute current area.
3. Update maximum area.
4. Move the shorter height pointer.
5. Repeat until pointers meet.

---

## Complexity

- Time: O(n)
- Space: O(1)

---

## Learning

- Greedy movement of pointers eliminates unnecessary checks.
- Width decreases every step, so only increasing the limiting height can improve the answer.
- This concludes the Two Pointer pattern from the GFG DSA 160 Sheet.

---

# Topic Summary - Two Pointers

## Problems Practiced

- Pair Sum
- Pair Closest to Target
- Count Pairs
- Count Triplets
- Valid Triangles
- Trapping Rain Water
- Container With Most Water

---

## Major Learnings

- Sort whenever required.
- Move pointers based on the condition instead of checking every pair.
- Convert O(n²) brute-force approaches into O(n).
- Recognize problems involving pairs, triplets, or opposite-end traversal.

---

## Final Takeaway

Two Pointers is one of the most powerful DSA patterns for array and string problems. Mastering this technique significantly improves problem-solving speed and optimization skills.