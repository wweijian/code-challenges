# Julia - Control Flow

## If/Else Statements

Similar to Python with indentation, but uses `end` keyword to close blocks.

### Basic if-else

```julia
x = 10
if x > 5
    println("Greater than 5")
elseif x > 0
    println("Positive")
else
    println("Non-positive")
end
```

### Ternary operator

```julia
result = x > 0 ? "Positive" : "Non-positive"
```

### Short-circuit evaluation

```julia
x > 0 && println("Positive")
x < 0 || println("Non-negative")
```

### Compound conditions

```julia
if x > 0 && x < 100
    println("Between 0 and 100")
end

if x < 0 || x > 100
    println("Outside range")
end

if !(x == 0)
    println("Not zero")
end
```

### Assignment in condition

```julia
if (y = get_value()) > 0
    println("$y is positive")
end
```

### Multiple comparisons (chained)

```julia
if 0 < x < 100
    println("Between 0 and 100")
end
```

### in operator for membership

```julia
if x in [1, 2, 3, 4, 5]
    println("In array")
end
```

### Type checking in conditions

```julia
if x isa Int
    println("x is an integer")
end
```

---

---

## For Loops

Uses `for-in` with ranges and iterables. `end` keyword closes the loop.

### Iterate over range

```julia
for i in 1:10
    print("$i ")
end
```

### Alternative syntax with =

```julia
for i = 1:10
    print("$i ")
end
```

### Range with step

```julia
for i in 1:2:10
    print("$i ")
end
```

### Iterate over array

```julia
numbers = [1, 2, 3, 4, 5]
for num in numbers
    print("$num ")
end
```

### Enumerate for index and value

```julia
for (index, num) in enumerate(numbers)
    println("Index $index: $num")
end
```

### Iterate over string

```julia
for char in "hello"
    println(char)
end
```

### Iterate over dictionary

```julia
person = Dict("name" => "John", "age" => 30)
for (key, value) in person
    println("$key: $value")
end
```

### Just keys

```julia
for key in keys(person)
    println(key)
end
```

### Just values

```julia
for value in values(person)
    println(value)
end
```

### Zip multiple iterables

```julia
names = ["Alice", "Bob", "Charlie"]
ages = [25, 30, 35]
for (name, age) in zip(names, ages)
    println("$name is $age")
end
```

### Reverse iteration

```julia
for i in 10:-1:1
    print("$i ")
end

for num in reverse(numbers)
    print("$num ")
end
```

### Nested loops

```julia
for i in 1:3
    for j in 1:3
        print("($i,$j) ")
    end
    println()
end
```

### Nested loop on one line

```julia
for i in 1:3, j in 1:3
    print("($i,$j) ")
end
```

### Array comprehension

```julia
squares = [x^2 for x in 1:10]
even_squares = [x^2 for x in 1:10 if x % 2 == 0]
```

### Cartesian product

```julia
pairs = [(i, j) for i in 1:3 for j in 1:3]
```

---

---

## While Loops

While loops with `end` keyword. No do-while construct.

### Basic while loop

```julia
i = 0
while i < 10
    print("$i ")
    global i += 1
end
```

### While with complex condition

```julia
while i < 10 && flag
    global i += 1
end
```

### Infinite loop with break

```julia
while true
    if condition
        break
    end
end
```

### While with continue

```julia
k = 0
while k < 10
    global k += 1
    if k % 2 == 0
        continue
    end
    print("$k ")
end
```

### Simulating do-while

```julia
i = 0
while true
    println(i)
    global i += 1
    if i >= 10
        break
    end
end
```

### While reading input

```julia
while (line = readline()) != "quit"
    println("You entered: $line")
end
```

---

---

## Switch/Match Statements

No built-in switch statement. Uses if-elseif chains or dictionaries.

### If-elseif chain (most common)

```julia
day = 3
if day == 1
    println("Monday")
elseif day == 2
    println("Tuesday")
elseif day == 3
    println("Wednesday")
else
    println("Other day")
end
```

### Multiple values using in

```julia
if day in [1, 2, 3, 4, 5]
    println("Weekday")
elseif day in [6, 7]
    println("Weekend")
end
```

### Dictionary dispatch pattern

```julia
day_names = Dict(
    1 => "Monday",
    2 => "Tuesday",
    3 => "Wednesday",
    4 => "Thursday",
    5 => "Friday",
    6 => "Saturday",
    7 => "Sunday"
)
println(get(day_names, day, "Unknown"))
```

### Dictionary with functions

```julia
day_handlers = Dict(
    1 => () -> println("Monday"),
    2 => () -> println("Tuesday"),
    3 => () -> println("Wednesday")
)
handler = get(day_handlers, day, () -> println("Unknown"))
handler()
```

### Multiple dispatch (Julia's unique feature)

```julia
process(x::Int) = println("Integer: $x")
process(x::String) = println("String: $x")
process(x::Float64) = println("Float: $x")

process(42)
process("hello")
process(3.14)
```

### Pattern matching with if-else and type checking

```julia
value = "test"
if value isa Int
    println("Integer")
elseif value isa String
    println("String")
elseif value isa Array
    println("Array")
else
    println("Other type")
end
```

### Ternary for simple cases

```julia
result = day == 1 ? "Monday" :
         day == 2 ? "Tuesday" :
         day == 3 ? "Wednesday" :
         "Other"
println(result)
```

---

---

## Break and Continue

Break and continue work similarly to other languages. No else clause on loops.

### Break - exits loop immediately

```julia
for i in 0:9
    if i == 5
        break
    end
    print("$i ")
end
```

### Continue - skips to next iteration

```julia
for i in 0:9
    if i % 2 == 0
        continue
    end
    print("$i ")
end
```

### Break in while loop

```julia
i = 0
while true
    if i == 5
        break
    end
    print("$i ")
    global i += 1
end
```

### Continue in while loop

```julia
i = 0
while i < 10
    global i += 1
    if i % 2 == 0
        continue
    end
    print("$i ")
end
```

### Break in nested loops (only breaks inner loop)

```julia
for i in 1:3
    for j in 1:3
        if j == 2
            break
        end
        print("($i,$j) ")
    end
    println()
end
```

### Using @goto to break outer loop

```julia
for i in 1:3
    for j in 1:3
        if i == 1 && j == 1
            @goto outer
        end
        print("($i,$j) ")
    end
end
@label outer
println("Exited")
```

### Early return from function (alternative to break)

```julia
function find_value(arr, target)
    for (i, val) in enumerate(arr)
        if val == target
            return i
        end
    end
    return nothing
end
```

---

---

## Advanced Iteration

### Iterating Through Arrays/Lists

#### Iterate with in

```julia
numbers = [1, 2, 3, 4, 5]
for num in numbers
    print("$num ")
end
```

#### Iterate with =

```julia
numbers = [1, 2, 3, 4, 5]
for num = numbers
    print("$num ")
end
```

#### Modify with eachindex()

```julia
numbers = [1, 2, 3, 4, 5]
for i in eachindex(numbers)
    numbers[i] *= 2
end
```

#### enumerate() - index and value

```julia
numbers = [1, 2, 3, 4, 5]
for (i, num) in enumerate(numbers)
    println("Index $i: $num")
end
```

#### Unpack with enumerate()

```julia
numbers = [1, 2, 3, 4, 5]
for (idx, val) in enumerate(numbers)
    println("$idx -> $val")
end
```

#### Iterate with eachindex()

```julia
numbers = [1, 2, 3, 4, 5]
for i in eachindex(numbers)
    println("Index $i: $(numbers[i])")
end
```

#### Reverse with reverse()

```julia
numbers = [1, 2, 3, 4, 5]
for num in reverse(numbers)
    print("$num ")
end
```

#### Reverse with index range

```julia
numbers = [1, 2, 3, 4, 5]
for i in length(numbers):-1:1
    print("$(numbers[i]) ")
end
```

#### Reverse with Iterators.reverse()

```julia
using Iterators
numbers = [1, 2, 3, 4, 5]
for num in Iterators.reverse(numbers)
    print("$num ")
end
```

#### pairs() - index and value

```julia
numbers = [1, 2, 3, 4, 5]
for (idx, val) in pairs(numbers)
    println("$idx => $val")
end
```

### Iterating Through Strings

#### Iterate over characters

```julia
word = "hello"
for char in word
    print("$char ")
end
```

#### enumerate() with strings

```julia
word = "hello"
for (i, char) in enumerate(word)
    println("Index $i: $char")
end
```

#### eachindex() for valid indices

```julia
word = "hello"
for i in eachindex(word)
    println("Index $i: $(word[i])")
end
```

#### eachindex() with Unicode strings

```julia
unicode_word = "héllo"
for i in eachindex(unicode_word)
    println("$i: $(unicode_word[i])")
end
```

#### Reverse with reverse()

```julia
word = "hello"
for char in reverse(word)
    print("$char ")
end
```

#### Reverse with index range

```julia
word = "hello"
for i in length(word):-1:1
    print("$(word[i]) ")
end
```

### Iterating Through Objects/Maps/Dictionaries

#### Iterate over key-value pairs

```julia
ages = Dict("Alice" => 25, "Bob" => 30, "Charlie" => 35)
for (key, value) in ages
    println("$key: $value")
end
```

#### Alternative unpacking

```julia
ages = Dict("Alice" => 25, "Bob" => 30, "Charlie" => 35)
for pair in ages
    println("$(pair.first): $(pair.second)")
end
```

#### keys() only

```julia
ages = Dict("Alice" => 25, "Bob" => 30, "Charlie" => 35)
for key in keys(ages)
    println(key)
end
```

#### values() only

```julia
ages = Dict("Alice" => 25, "Bob" => 30, "Charlie" => 35)
for value in values(ages)
    println(value)
end
```

#### pairs() iteration

```julia
ages = Dict("Alice" => 25, "Bob" => 30, "Charlie" => 35)
for (k, v) in pairs(ages)
    println("$k => $v")
end
```

### Nested Iteration

#### Nested for loops

```julia
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

for row in matrix
    for element in row
        print("$element ")
    end
    println()
end
```

#### Nested with enumerate()

```julia
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

for (i, row) in enumerate(matrix)
    for (j, element) in enumerate(row)
        println("[$i][$j] = $element")
    end
end
```

#### Compact nested loop (one line)

```julia
for i in 1:3, j in 1:3
    println("($i, $j)")
end
```

#### Three-dimensional compact loop

```julia
for i in 1:2, j in 1:2, k in 1:2
    println("($i, $j, $k)")
end
```

### Parallel/Concurrent Iteration

#### @threads for parallel loop

```julia
using Base.Threads

numbers = collect(1:1000)

@threads for i in eachindex(numbers)
    numbers[i] *= 2
end
```

#### @threads with atomic reduction

```julia
using Base.Threads

numbers = collect(1:1000)
sum = Threads.Atomic{Int}(0)

@threads for num in numbers
    Threads.atomic_add!(sum, num)
end
```

#### pmap() for parallel map

```julia
using Distributed

addprocs(4)

numbers = 1:1000
result = pmap(x -> x^2, numbers)
```

#### @distributed for parallel loops

```julia
using Distributed

sum = @distributed (+) for i in 1:1000
    i^2
end
```

---