# Python - Control Flow

## If/Else Statements

Uses indentation instead of braces. No parentheses required around conditions (but allowed).

### Basic if-else

```python
x = 10
if x > 5:
    print("Greater than 5")
elif x > 0:
    print("Positive")
else:
    print("Non-positive")
```

### Inline if-else (ternary)

```python
result = "Positive" if x > 0 else "Non-positive"
```

### Multiple conditions with inline if

```python
result = "Negative" if x < 0 else "Zero" if x == 0 else "Positive"
```

### Logical operators

```python
if x > 0 and x < 100:
    print("Between 0 and 100")

if x < 0 or x > 100:
    print("Outside range")

if not (x == 0):
    print("Not zero")
```

### Walrus operator (Python 3.8+)

Assignment in condition.

```python
if (y := get_value()) > 0:
    print(f"{y} is positive")
```

### match-case (Python 3.10+)

```python
match x:
    case 1:
        print("One")
    case 2:
        print("Two")
    case _:
        print("Other")
```

### Truthiness checking

```python
if x:
    print("Truthy")
```

### Membership testing

```python
if x in [1, 2, 3, 4, 5]:
    print("In list")
```

---

---

## For Loops

Uses `for-in` syntax with iterables. No traditional C-style for loop.

### Iterate over range

```python
for i in range(10):
    print(i, end=" ")
```

### Range with start and stop

```python
for i in range(5, 10):
    print(i, end=" ")
```

### Range with step

```python
for i in range(0, 10, 2):
    print(i, end=" ")
```

### Iterate over list

```python
numbers = [1, 2, 3, 4, 5]
for num in numbers:
    print(num, end=" ")
```

### Enumerate for index and value

```python
for index, num in enumerate(numbers):
    print(f"Index {index}: {num}")
```

### Enumerate with custom start

```python
for index, num in enumerate(numbers, start=1):
    print(f"Item {index}: {num}")
```

### Iterate over string

```python
for char in "hello":
    print(char)
```

### Iterate over dictionary

```python
person = {"name": "John", "age": 30}
for key in person:
    print(f"{key}: {person[key]}")

for key, value in person.items():
    print(f"{key}: {value}")
```

### Zip multiple iterables

```python
names = ["Alice", "Bob", "Charlie"]
ages = [25, 30, 35]
for name, age in zip(names, ages):
    print(f"{name} is {age}")
```

### Reversed iteration

```python
for i in reversed(range(10)):
    print(i, end=" ")

for num in reversed(numbers):
    print(num, end=" ")
```

### Nested loops

```python
for i in range(3):
    for j in range(3):
        print(f"({i},{j})", end=" ")
    print()
```

### List comprehension (loop alternative)

```python
squares = [x**2 for x in range(10)]
even_squares = [x**2 for x in range(10) if x % 2 == 0]
```

---

---

## While Loops

Only while loops available. No do-while construct.

### Basic while loop

```python
i = 0
while i < 10:
    print(i, end=" ")
    i += 1
```

### While with complex condition

```python
while i < 10 and flag:
    i += 1
```

### Infinite loop with break

```python
while True:
    if condition:
        break
```

### While with continue

```python
k = 0
while k < 10:
    k += 1
    if k % 2 == 0:
        continue
    print(k, end=" ")
```

### While-else

Executes if loop completes without break.

```python
i = 0
while i < 5:
    print(i)
    i += 1
else:
    print("Loop completed normally")
```

### Simulating do-while

```python
i = 0
while True:
    print(i)
    i += 1
    if i >= 10:
        break
```

### While with walrus operator

```python
while (line := input("Enter text: ")) != "quit":
    print(f"You entered: {line}")
```

---

---

## Switch/Match Statements

Uses match-case (Python 3.10+). More powerful pattern matching than traditional switch.

### Basic match-case (Python 3.10+)

```python
day = 3
match day:
    case 1:
        print("Monday")
    case 2:
        print("Tuesday")
    case 3:
        print("Wednesday")
    case _:
        print("Other day")
```

### Multiple values (OR pattern)

```python
match day:
    case 1 | 2 | 3 | 4 | 5:
        print("Weekday")
    case 6 | 7:
        print("Weekend")
```

### Pattern matching with types

```python
def process(value):
    match value:
        case int():
            print("Integer")
        case str():
            print("String")
        case list():
            print("List")
        case _:
            print("Other type")
```

### Destructuring patterns

```python
point = (0, 0)
match point:
    case (0, 0):
        print("Origin")
    case (0, y):
        print(f"On Y-axis at {y}")
    case (x, 0):
        print(f"On X-axis at {x}")
    case (x, y):
        print(f"Point at ({x}, {y})")
```

### Match with guard (if condition)

```python
match point:
    case (x, y) if x == y:
        print("On diagonal")
    case (x, y):
        print("Not on diagonal")
```

### Class pattern matching

```python
class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

match obj:
    case Point(x=0, y=0):
        print("Origin")
    case Point(x=0, y=y):
        print(f"Y-axis: {y}")
    case Point(x=x, y=0):
        print(f"X-axis: {x}")
```

### Dictionary patterns

```python
config = {"host": "localhost", "port": 8080}
match config:
    case {"host": host, "port": port}:
        print(f"Connecting to {host}:{port}")
    case {"host": host}:
        print(f"Using default port for {host}")
```

### List patterns

```python
items = [1, 2, 3, 4, 5]
match items:
    case []:
        print("Empty")
    case [first]:
        print(f"One item: {first}")
    case [first, second]:
        print(f"Two items: {first}, {second}")
    case [first, *rest]:
        print(f"First: {first}, Rest: {rest}")
```

### Pre-3.10 alternative: dictionary dispatch

```python
def monday_handler():
    print("Monday")

def tuesday_handler():
    print("Tuesday")

day_handlers = {
    1: monday_handler,
    2: tuesday_handler,
}

handler = day_handlers.get(day, lambda: print("Unknown"))
handler()
```

---

---

## Break and Continue

Break and continue work in for and while loops. Supports else clause on loops.

### Break - exits loop immediately

```python
for i in range(10):
    if i == 5:
        break
    print(i, end=" ")
```

### Continue - skips to next iteration

```python
for i in range(10):
    if i % 2 == 0:
        continue
    print(i, end=" ")
```

### Break in while loop

```python
i = 0
while True:
    if i == 5:
        break
    print(i, end=" ")
    i += 1
```

### Continue in while loop

```python
i = 0
while i < 10:
    i += 1
    if i % 2 == 0:
        continue
    print(i, end=" ")
```

### else clause - executes if loop completes without break

```python
for i in range(5):
    if i == 10:
        break
else:
    print("Loop completed normally")

for i in range(5):
    if i == 3:
        break
else:
    print("Loop completed normally")
```

### Break in nested loops (only breaks inner loop)

```python
for i in range(3):
    for j in range(3):
        if j == 2:
            break
        print(f"({i},{j})", end=" ")
    print()
```

### Breaking outer loop with flag

```python
found = False
for i in range(3):
    for j in range(3):
        if i == 1 and j == 1:
            found = True
            break
    if found:
        break
```

### Breaking outer loop with exception

```python
class BreakOut(Exception):
    pass

try:
    for i in range(3):
        for j in range(3):
            if i == 1 and j == 1:
                raise BreakOut
except BreakOut:
    pass
```

### Pass statement (does nothing, placeholder)

```python
for i in range(5):
    if i == 3:
        pass
    print(i)
```

---

---

## Advanced Iteration

### Iterating Through Arrays/Lists

#### Iterate over elements

```python
numbers = [1, 2, 3, 4, 5]
for num in numbers:
    print(num, end=" ")
```

#### Modify list with comprehension

```python
numbers = [1, 2, 3, 4, 5]
numbers = [num * 2 for num in numbers]
```

#### enumerate() - index and value

```python
numbers = [1, 2, 3, 4, 5]
for i, num in enumerate(numbers):
    print(f"Index {i}: {num}")
```

#### enumerate() with custom start

```python
numbers = [1, 2, 3, 4, 5]
for i, num in enumerate(numbers, start=1):
    print(f"Item {i}: {num}")
```

#### Modify with enumerate()

```python
numbers = [1, 2, 3, 4, 5]
for i, num in enumerate(numbers):
    numbers[i] = num * 2
```

#### Reverse iteration with reversed()

```python
numbers = [1, 2, 3, 4, 5]
for num in reversed(numbers):
    print(num, end=" ")
```

#### Reversed with enumerate()

```python
numbers = [1, 2, 3, 4, 5]
for i, num in enumerate(reversed(numbers)):
    print(f"{i}: {num}")
```

#### Index-based with range()

```python
numbers = [1, 2, 3, 4, 5]
for i in range(len(numbers)):
    print(numbers[i], end=" ")
```

#### Reverse index-based

```python
numbers = [1, 2, 3, 4, 5]
for i in range(len(numbers) - 1, -1, -1):
    print(numbers[i], end=" ")
```

#### Index-based with step

```python
numbers = [1, 2, 3, 4, 5]
for i in range(0, len(numbers), 2):
    print(numbers[i], end=" ")
```

#### Manual iterator with next()

```python
numbers = [1, 2, 3, 4, 5]
it = iter(numbers)
while True:
    try:
        num = next(it)
        print(num, end=" ")
    except StopIteration:
        break
```

### Iterating Through Strings

#### Iterate over characters

```python
word = "hello"
for char in word:
    print(char, end=" ")
```

#### Create uppercase with comprehension

```python
word = "hello"
upper_word = ''.join(c.upper() for c in word)
```

#### enumerate() with strings

```python
word = "hello"
for i, char in enumerate(word):
    print(f"Index {i}: {char}")
```

#### enumerate() starting from 1

```python
word = "hello"
for i, char in enumerate(word, start=1):
    print(f"Position {i}: {char}")
```

#### Reverse with reversed()

```python
word = "hello"
for char in reversed(word):
    print(char, end=" ")
```

#### Reverse with slicing

```python
word = "hello"
for char in word[::-1]:
    print(char, end=" ")
```

#### Index-based with range()

```python
word = "hello"
for i in range(len(word)):
    print(word[i], end=" ")
```

#### Reverse index-based

```python
word = "hello"
for i in range(len(word) - 1, -1, -1):
    print(word[i], end=" ")
```

#### Index-based with step

```python
word = "hello"
for i in range(0, len(word), 2):
    print(word[i], end=" ")
```

### Iterating Through Objects/Maps/Dictionaries

#### Iterate over keys (default)

```python
ages = {"Alice": 25, "Bob": 30, "Charlie": 35}
for key in ages:
    print(f"{key}: {ages[key]}")
```

#### Explicit keys()

```python
ages = {"Alice": 25, "Bob": 30, "Charlie": 35}
for key in ages.keys():
    print(key)
```

#### items() - key-value pairs

```python
ages = {"Alice": 25, "Bob": 30, "Charlie": 35}
for key, value in ages.items():
    print(f"{key}: {value}")
```

#### items() with unpacking

```python
ages = {"Alice": 25, "Bob": 30, "Charlie": 35}
for k, v in ages.items():
    print(f"{k} is {v} years old")
```

#### values() only

```python
ages = {"Alice": 25, "Bob": 30, "Charlie": 35}
for value in ages.values():
    print(value)
```

#### sum() with values()

```python
ages = {"Alice": 25, "Bob": 30, "Charlie": 35}
total = sum(ages.values())
```

### Nested Iteration

#### Nested for loops

```python
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

for row in matrix:
    for element in row:
        print(element, end=" ")
    print()
```

#### Nested with enumerate()

```python
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

for i, row in enumerate(matrix):
    for j, element in enumerate(row):
        print(f"[{i}][{j}] = {element}")
```

#### Flatten with nested comprehension

```python
matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
flat = [element for row in matrix for element in row]
```

#### Nested comprehension for matrix

```python
table = [[i * j for j in range(1, 4)] for i in range(1, 4)]
```

#### Filter in nested comprehension

```python
matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
even_elements = [element for row in matrix for element in row if element % 2 == 0]
```

### Parallel/Concurrent Iteration

#### Multiprocessing Pool map

```python
from multiprocessing import Pool

def square(x):
    return x ** 2

numbers = list(range(1000))

with Pool(processes=4) as pool:
    result = pool.map(square, numbers)
```

#### Multiprocessing Pool starmap

```python
from multiprocessing import Pool

data = [(1, 2), (3, 4), (5, 6)]

with Pool() as pool:
    result = pool.starmap(lambda x, y: x + y, data)
```

#### ThreadPoolExecutor

```python
from concurrent.futures import ThreadPoolExecutor

numbers = list(range(100))

with ThreadPoolExecutor(max_workers=4) as executor:
    result = list(executor.map(lambda x: x ** 2, numbers))
```

#### ProcessPoolExecutor

```python
from concurrent.futures import ProcessPoolExecutor

numbers = list(range(100))

with ProcessPoolExecutor(max_workers=4) as executor:
    result = list(executor.map(lambda x: x ** 2, numbers))
```

---