# Day 29 - Longest Substring with Distinct Characters

## Problem Solved

- Longest Substring with Distinct Characters

---

## Pattern Used

- Sliding Window
- Hash Map

---

## Key Idea

Maintain the current substring using two pointers.

Whenever a repeated character appears, move the left pointer just after its previous occurrence.

Store each character's last seen index in a hash map.

---

## Algorithm

1. Traverse the string.
2. Store last occurrence of each character.
3. If duplicate appears inside current window:
   - move left pointer.
4. Update maximum length.

---

## Complexity

- Time: O(n)
- Space: O(1)

---

## Learning

- Last occurrence indexing is more efficient than removing characters one by one.
- Sliding Window works equally well on strings.
- Hash maps make duplicate detection constant time.

---

## Takeaway

Most substring problems involving uniqueness can be solved using Sliding Window + Hash Map.