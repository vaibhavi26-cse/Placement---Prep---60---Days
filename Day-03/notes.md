# Day 03 - DSA Notes 🚀

## 1. Stock Buy and Sell (Multiple Transactions Allowed)

### Problem Description
Given an array `prices[]`, where `prices[i]` represents the stock price on the ith day, find the maximum profit that can be earned if multiple transactions are allowed.

Conditions:
- Buy before selling
- Cannot hold multiple stocks at the same time

Example:

Input:
prices = [100,180,260,310,40,535,695]

Output:
865

Explanation:
Buy at 100 → Sell at 310 = 210  
Buy at 40 → Sell at 695 = 655  

Total Profit = 865

### Approach
Instead of finding one large transaction:

- Traverse through the array
- Whenever the next day's price is greater than today's price:
    - Add that profit
- Accumulate all positive differences

### Logic

```cpp
for(int i=0;i<n-1;i++){

    if(prices[i]<prices[i+1]){

        profit += prices[i+1]-prices[i];
    }
}
```

### Dry Run

prices = [7,1,5,3,6,4]

1 → 5 = +4  
3 → 6 = +3  

Total Profit = 7

### Time Complexity

O(n)

### Space Complexity

O(1)

---

## 2. Stock Buy and Sell (Maximum One Transaction)

### Problem Description

Given stock prices, return the maximum profit when only one transaction is allowed.

Conditions:

- One buy operation
- One sell operation
- Buy must happen before sell

Example:

Input:

prices = [7,1,5,3,6,4]

Output:

5

Explanation:

Buy at 1  
Sell at 6

Profit:

6−1=5

### Approach

- Maintain minimum buying price till current day
- Calculate possible profit for each day
- Update maximum profit

### Logic

```cpp
min_buy_price=min(min_buy_price,prices[i]);

profit=prices[i]-min_buy_price;

maxprofit=max(maxprofit,profit);
```

### Dry Run

prices=[7,1,5,3,6,4]

Initially:

min_buy=7

Day 2:

min_buy=1

Day 3:

profit=5−1=4

Day 5:

profit=6−1=5

Maximum Profit=5

### Time Complexity

O(n)

### Space Complexity

O(1)

---

## 3. Minimize Heights II

### Problem Description

Given heights of towers and value k:

Increase or decrease every tower exactly once by k such that the difference between tallest and shortest tower becomes minimum.

Example:

Input:

k=2

arr=[1,5,8,10]

Output:

5

Explanation:

Modified array:

[3,3,6,8]

Difference:

8−3=5

### Approach

Step 1:

Sort the array

Step 2:

Assume:

- Left side elements → +k
- Right side elements → -k

Step 3:

For every split position:

Find:

```cpp
mini=min(arr[0]+k,arr[i]-k);

maxi=max(arr[n-1]-k,arr[i-1]+k);
```

Step 4:

Update answer

```cpp
ans=min(ans,maxi-mini);
```

### Logic

```cpp
sort(arr.begin(),arr.end());

for(int i=1;i<n;i++){

    if(arr[i]-k<0)
        continue;

    int mini=min(arr[0]+k,arr[i]-k);

    int maxi=max(arr[n-1]-k,arr[i-1]+k);

    ans=min(ans,maxi-mini);
}
```

### Time Complexity

Sorting = O(nlogn)

Traversal = O(n)

Total:

O(nlogn)

### Space Complexity

O(1)

---

# Key Learnings From Today ✨

✔ Passing sample test cases does not guarantee correctness

✔ Hidden test cases expose edge cases

✔ Tiny implementation mistakes create large output differences

Examples:

- mini-maxi vs maxi-mini
- Incorrect swap logic
- Bubble sort causing TLE
- Negative values after subtraction
- Finding global minimum instead of tracking minimum till current position

✔ Debugging is as important as coding

✔ Understanding logic > memorizing code

---
60 Days Placement Journey Continues 🚀