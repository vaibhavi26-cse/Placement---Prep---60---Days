# Day Notes – Strings Problems 🚀

## 1. Traverse String in C++

### Methods

**Using index**

```cpp
for(int i=0;i<s.length();i++)
{
    cout<<s[i];
}
```

**Using range based loop**

```cpp
for(char ch:s)
{
    cout<<ch;
}
```

**Reverse Traversal**

```cpp
for(int i=s.length()-1;i>=0;i--)
{
    cout<<s[i];
}
```

Time Complexity:

```
O(n)
```

---

# 2. String to Integer (atoi)

### Logic

1. Skip whitespaces
2. Check sign (+ or -)
3. Read digits
4. Stop at non-digit
5. Check overflow before updating number

### Important formula

```cpp
if(num>(INT_MAX-digit)/10)
```

### Why before multiplication?

Wrong:

```cpp
num=num*10+digit;
```

Number may overflow first.

Correct:

```cpp
if(num>(INT_MAX-digit)/10)
```

### Range of integer

```cpp
INT_MAX = 2147483647
INT_MIN = -2147483648
```

Time Complexity:

```
O(n)
```

Space Complexity:

```
O(1)
```

### Common mistakes

❌ s[i]=="0"

✅ s[i]=='0'

❌ Check overflow after multiplication

✅ Check before multiplication

---

# 3. Add Binary Strings

### Logic

Start from last index of both strings:

* Add digits + carry
* Store remainder
* Update carry
* Reverse answer

### Formula

```cpp
sum=carry;

sum+=s1[i]-'0';

sum+=s2[j]-'0';

ans+=(sum%2)+'0';

carry=sum/2;
```

### Why?

```cpp
sum%2
```

Returns:

```
0 or 1
```

Convert into character:

```cpp
(sum%2)+'0'
```

Examples:

```
0+'0' → '0'
1+'0' → '1'
```

### Common mistakes

❌ string ans=" "

(space included)

✅

```cpp
string ans="";
```

❌

```cpp
s2[i]
```

✅

```cpp
s2[j]
```

### Remove leading zeros

```cpp
while(k<ans.length()-1 && ans[k]=='0')
{
    k++;
}
```

Time Complexity:

```
O(max(n,m))
```

Space Complexity:

```
O(max(n,m))
```

---

# 4. Valid Anagram (lowercase only)

### Logic

Create frequency array of size 26

Increase count for first string

Decrease count for second string

If all become 0 → anagram

```cpp
freq[s1[i]-'a']++;

freq[s2[i]-'a']--;
```

Time Complexity:

```
O(n)
```

Space Complexity:

```
O(26) ≈ O(1)
```

### Common mistakes

❌ Forget length check

```cpp
if(s1.length()!=s2.length())
return false;
```

---

# 5. First Non-Repeating Character

### Logic

Step 1:

Count frequency

```cpp
freq[s[i]-'a']++;
```

Step 2:

Traverse again

```cpp
if(freq[s[i]-'a']==1)
return s[i];
```

If not found:

```cpp
return '#';
```

Time Complexity:

```
O(n)
```

Space Complexity:

```
O(26)
```

---

# Important Character Tricks

ASCII:

```cpp
'0' = 48
'A' = 65
'a' = 97
```

Character → Integer

```cpp
digit=s[i]-'0';
```

Example:

```cpp
'7'-'0'

55-48

=7
```

Integer → Character

```cpp
digit+'0'
```

Example:

```cpp
1+'0'

49

='1'
```

---

# Patterns learned today

✅ Two pointer from end

✅ Frequency array

✅ Character ↔ Integer conversion

✅ Overflow handling

✅ String traversal

✅ Carry based addition
