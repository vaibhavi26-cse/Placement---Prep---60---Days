# Day 6 - String Problems Notes

## 1. Find All Occurrences of Pattern in Text

### Problem

Given text `txt` and pattern `pat`, return all starting indices where pattern occurs in text.

### Brute Force Approach

Check every possible starting position in the text and compare the pattern.

```cpp
for(int i=0;i<=n-m;i++){
    int j;
    
    for(j=0;j<m;j++){
        if(txt[i+j]!=pat[j])
            break;
    }
    
    if(j==m)
        output.push_back(i);
}
```

### Logic

* Traverse every index in text
* Match pattern character by character
* If complete pattern matches → store index

### Mistakes I encountered

* Used `i++` instead of `j++` in inner loop
* Declared `j` twice causing scope issues
* Forgot `txt[i+j]`

### Time Complexity

Brute Force:

```text
O(n*m)
```

Optimized KMP:

```text
O(n+m)
```

### Learning

KMP avoids rechecking already matched characters using LPS array.

---

## 2. Min Characters to Add at Front for Palindrome

### Problem

Find minimum characters to add at the beginning so the string becomes palindrome.

### KMP Trick

Create:

```text
temp = original + "$" + reverse(original)
```

Find LPS of temp.

Formula:

```text
Answer = length(original)-last LPS value
```

### Example

Input:

```text
abcd
```

Reverse:

```text
dcba
```

Create:

```text
abcd$dcba
```

Last LPS:

```text
1
```

Answer:

```text
4-1=3
```

Characters added:

```text
dcb
```

Final palindrome:

```text
dcbabcd
```

### Time Complexity

```text
O(n)
```

### Learning

KMP can be used outside searching problems.

---

## 3. Strings Rotations of Each Other

### Problem

Check whether one string is rotation of another.

### Trick

Concatenate first string with itself:

```cpp
string temp=s1+s1;
```

Search second string inside it.

```cpp
return temp.find(s2)!=string::npos;
```

### Why it works

For:

```text
s1="abcd"
```

Create:

```text
abcdabcd
```

Possible rotations inside:

```text
abcd
bcda
cdab
dabc
```

All rotations automatically appear.

### Important Concept

`find()`:

* Returns index if found
* Returns `string::npos` if not found

Example:

```cpp
string s="hello";

s.find("ll") → 2

s.find("xyz") → string::npos
```

### Meaning of

```cpp
return temp.find(s2)!=string::npos;
```

Equivalent to:

```cpp
int pos=temp.find(s2);

if(pos!=string::npos)
    return true;
else
    return false;
```

### Time Complexity

```text
O(n)
```

---

# Today's Key Learnings

1. KMP is not only for pattern searching.
2. LPS stores previously matched information.
3. `string::find()` returns index or `string::npos`.
4. Rotation problems can often be solved using concatenation trick.
5. Be careful with loop variables (`i` vs `j`) and variable scope.
