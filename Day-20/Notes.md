# Day 20 - DSA Notes

## Problem 1: Subarrays with Sum K

### Approach Used
- Prefix Sum + HashMap (Frequency Map)
- Maintain a running prefix sum while traversing the array.
- If `(currentSum - k)` has already appeared, then a subarray with sum `k` exists.
- Store the frequency of every prefix sum in a HashMap.

### Key Observation

For a subarray `(l...r)`:

currentPrefixSum - previousPrefixSum = k

Therefore,

previousPrefixSum = currentPrefixSum - k

Every occurrence of `(currentSum - k)` contributes one valid subarray ending at the current index.

### Algorithm
1. Initialize:
   - `sum = 0`
   - `count = 0`
   - `unordered_map<int,int> mp`
2. Store:
   ```
   mp[0] = 1;
   ```
3. Traverse the array:
   - Update prefix sum.
   - Check whether `(sum - k)` exists.
   - Add its frequency to the answer.
   - Store/update the current prefix sum frequency.
4. Return the count.

### Why `mp[0] = 1`?
It handles subarrays that start from index `0`.

Example:
```
arr = [3,2]
k = 5
```

The prefix sum becomes `5`, so:

```
sum - k = 0
```

Since `0` already exists in the map, the subarray `[3,2]` is counted.

### Time Complexity
- **O(n)**

### Space Complexity
- **O(n)**

### Concepts Learned
- Prefix Sum
- HashMap Frequency Counting
- Counting Subarrays
- Running Sum Technique

---

# Problem 2: Count Subarrays with Given XOR

### Approach Used
- Prefix XOR + HashMap (Frequency Map)
- Maintain the XOR of elements from the beginning.
- If `(currentXOR ^ k)` exists previously, then a valid subarray is found.
- Store the frequency of every prefix XOR.

### XOR Properties Used

```
a ^ a = 0

a ^ 0 = a

a ^ b ^ b = a
```

These properties make Prefix XOR possible.

### Key Observation

For a subarray `(l...r)`:

```
prefixXOR[r] ^ prefixXOR[l-1] = k
```

Rearranging,

```
prefixXOR[l-1] = prefixXOR[r] ^ k
```

Thus, every occurrence of `(currentXOR ^ k)` contributes one valid subarray.

### Algorithm
1. Initialize:
   - `xorValue = 0`
   - `count = 0`
   - `unordered_map<int,int> mp`
2. Store:
   ```
   mp[0] = 1;
   ```
3. Traverse the array:
   - Update prefix XOR.
   - Check whether `(xorValue ^ k)` exists.
   - Add its frequency to the answer.
   - Store/update the current XOR frequency.
4. Return the count.

### Why `mp[0] = 1`?
It counts subarrays that begin from index `0`.

Example:
```
arr = [6]
k = 6
```

Current XOR:

```
6
```

Need:

```
6 ^ 6 = 0
```

Since `0` is already stored, the subarray `[6]` is counted.

### Time Complexity
- **O(n)**

### Space Complexity
- **O(n)**

### Concepts Learned
- Prefix XOR
- XOR Properties
- HashMap Frequency Counting
- Counting Subarrays
- Bit Manipulation

---

# Comparison: Prefix Sum vs Prefix XOR

| Feature | Prefix Sum | Prefix XOR |
|---------|------------|------------|
| Operation | Addition | XOR |
| Formula | `currentSum - k` | `currentXOR ^ k` |
| HashMap stores | Prefix Sum | Prefix XOR |
| Used For | Sum-based subarray problems | XOR-based subarray problems |
| Time Complexity | O(n) | O(n) |
| Space Complexity | O(n) | O(n) |

---

# Key Takeaways

- Prefix Sum is useful for subarray **sum** problems.
- Prefix XOR is useful for subarray **XOR** problems.
- HashMap stores the frequency of previous prefix values.
- `mp[0] = 1` is essential to count subarrays starting from index `0`.
- Instead of checking every subarray (**O(n²)**), Prefix Sum/XOR + HashMap reduces the complexity to **O(n)**.

## Pattern Recognition

Whenever you see:
- Count subarrays with Sum = K
- Count subarrays with XOR = K
- Longest subarray with Sum/XOR
- Equal number of 0s and 1s
- Prefix-based subarray problems

Think:

**Prefix (Sum/XOR) + HashMap = O(n) Solution**