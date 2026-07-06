# Day 17 - DSA Notes

## Problem 1: Count Pairs with Given Sum

### Approach Used
- Use HashMap (frequency map)
- Traverse the array
- For each element, calculate:
  
  target - currentElement

- If the complement exists in the map:
  
  count += frequency of complement

- Store/update current element frequency

### Code Logic
```cpp
unordered_map<int,int> mp;

for(int num : arr){
    int complement = target - num;

    if(mp.find(complement)!=mp.end()){
        count += mp[complement];
    }

    mp[num]++;
}
```

### Time Complexity
O(n)

### Space Complexity
O(n)

### Learnings
- HashMap reduces nested loop O(n²) to O(n)
- Frequency maps help in pair problems
- Complements are commonly used in sum-based questions



## Problem 2: All Triplets With Zero Sum

### Initial Mistakes
- Returned triplet values instead of indices
- Used two pointers after sorting and skipped duplicates
- Missed valid combinations for repeated values
- Large hidden test cases failed

### Correct Approach
- Fix first index i
- Use HashMap for remaining elements
- Find required third element:

required = -(arr[i] + arr[j])

- Store indices to preserve original positions
- Use set to avoid duplicate triplets

### Code Logic

```cpp
set<vector<int>> st;

for(int i=0;i<n-2;i++){

    unordered_map<int,vector<int>> mp;

    for(int j=i+1;j<n;j++){

        int x=-(arr[i]+arr[j]);

        if(mp.find(x)!=mp.end()){

            for(int k:mp[x]){

                vector<int> temp={i,k,j};

                sort(temp.begin(),temp.end());

                st.insert(temp);
            }
        }

        mp[arr[j]].push_back(j);
    }
}
```

### Time Complexity
O(n²)

### Space Complexity
O(n)

### Learnings
- Two pointers work for unique values but may fail for all index combinations
- Preserve original indices when output requires positions
- Duplicate values at different indices create multiple valid answers
- Hidden test cases often reveal edge cases with duplicates