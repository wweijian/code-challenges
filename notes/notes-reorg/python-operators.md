# Python - Operators

## Operators

### Math operators
Include the standard set plus `**` for exponentiation and `//` for floor division. Division `/` always returns float even with integers (`5/2 = 2.5`). Works on many types—`+` concatenates strings/lists, `*` repeats them.
```python
a, b = 10, 3
sum_val = a + b        # 13
quotient = a / b       # 3.3333... (float)
floor_div = a // b     # 3 (floor division)
power = a ** b         # 1000
remainder = a % b      # 1

text = "hi" + " there"    # "hi there"
repeat = "ha" * 3         # "hahaha"
combined = [1, 2] + [3]   # [1, 2, 3]
```

### Compound assignment
`+=`, `-=`, `*=`, `/=`, `//=`, `%=`, `**=` modify variable in place. Note: Python has no `++` or `--` operators—use `x += 1` instead.
```python
x = 10
x += 5    # x = 15
x -= 3    # x = 12
x *= 2    # x = 24
x //= 4   # x = 6
x **= 2   # x = 36
x += 1    # No x++ in Python!
```

### Comparison operators
Use the same symbols but can be chained: `x < y < z` works naturally. `==` compares values; `is` compares object identity. Works on most types including strings (lexicographic comparison).
```python
a, b, c = 5, 10, 15
equal = (a == b)           # False
chained = (a < b < c)      # True (can chain!)

list1 = [1, 2, 3]
list2 = [1, 2, 3]
list3 = list1
print(list1 == list2)      # True (same values)
print(list1 is list2)      # False (different objects)
print(list1 is list3)      # True (same object)
```

### Logic operators
`and`, `or`, `not` (words, not symbols). They short-circuit and return the actual value that determined the result, not just True/False: `5 or 0` returns `5`. Any object can be used in boolean context (empty containers are falsy).
```python
a, b = True, False
and_result = a and b       # False
or_result = a or b         # True
not_result = not a         # False

result1 = 5 or 0           # 5
result2 = "" or "default"  # "default"
result3 = [1, 2] and "yes" # "yes"

if not []:                 # True (empty list is falsy)
    print("Empty!")
```

---

---