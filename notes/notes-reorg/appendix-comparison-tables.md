# Appendix: Cross-Language Comparison Tables

This appendix contains quick reference tables comparing syntax and features across C++, Python, Julia, and TypeScript.

---

## Table of Contents
1. [Common Data Types](#common-data-types)
2. [Type Casting Methods](#type-casting-methods)
3. [Variable Modifiers](#variable-modifiers)
4. [Operators Summary](#operators-summary)
5. [Control Flow Comparison](#control-flow-comparison)
6. [Function Overloading vs Multiple Dispatch](#function-overloading-vs-multiple-dispatch)
7. [Advanced Iteration Comparison](#advanced-iteration-comparison)

---

## Common Data Types

| Type | C++ | Python | Julia | TypeScript |
|------|-----|--------|-------|------------|
| **Integer** | `int`, `long` | `int` | `Int64`, `Int32` | `number` |
| **Float** | `float`, `double` | `float` | `Float64`, `Float32` | `number` |
| **String** | `string` | `str` | `String` | `string` |
| **Boolean** | `bool` | `bool` | `Bool` | `boolean` |
| **Null/None** | `nullptr` | `None` | `nothing` | `null`, `undefined` |

---

## Type Casting Methods

| Feature | C++ | Python | Julia | TypeScript |
|---------|-----|--------|-------|------------|
| **Safety Level** | Multiple levels | Safe (duck typing) | Safe with convert | Compile-time only |
| **Main Method** | `static_cast<T>()` | `type(value)` | `convert(T, x)` | `as` or `<type>` |
| **Runtime Check** | `dynamic_cast` | `isinstance()` | `isa` | `typeof`, `instanceof` |
| **String to Number** | `stoi()`, `stod()` | `int()`, `float()` | `parse(T, str)` | `Number()`, `parseInt()` |
| **Number to String** | `to_string()` | `str()` | `string()` | `toString()`, `String()` |
| **Type Assertion** | Templates | Type hints | `::` operator | `as`, `!` |

### Key Differences

#### C++
- **Most explicit** - many cast types for different scenarios
- **Compile-time safety** with `static_cast`
- **Runtime safety** with `dynamic_cast`
- **Fine-grained control** over memory and access

#### Python
- **No real casting** - uses duck typing
- **Type conversion** instead of casting
- **Runtime type checking** with `isinstance()`
- **Type hints don't enforce**, just for tooling

#### Julia
- **`convert()` for safe conversion** - errors if impossible
- **Type assertions** with `::` for optimization
- **Multiple dispatch** based on types
- **Performance-focused** type system

#### TypeScript
- **Compile-time only** - no runtime effect
- **Type assertions** tell compiler, not runtime
- **JavaScript conversion** methods for actual casting
- **Type guards** for runtime checking

---

## Variable Modifiers

| Modifier | C++ | Python | Julia | TypeScript |
|----------|-----|--------|-------|------------|
| **Global** | Default at file level | `global` keyword | `global` keyword | Module/declare global |
| **Static** | `static` | Default args trick | Closure | `static` in class |
| **Constant** | `const`, `constexpr` | Convention (CAPS) | `const` | `const`, `readonly` |
| **Private** | `private:` | `_name` convention | Not exported | `private`, `#field` |
| **Thread-local** | `thread_local` | `threading.local()` | `@threadlocal` | N/A |
| **Volatile** | `volatile` | N/A | N/A | N/A |
| **Extern** | `extern` | N/A | N/A | `declare` |

---

## Operators Summary

| Feature | C++ | Python | Julia | TypeScript |
|---------|-----|--------|-------|------------|
| **Division** | `/` | `/` (always float) | `/` (returns float) | `/` |
| **Integer Division** | `/` truncates (int÷int) | `//` floors | `÷` or `div()` | `/` returns decimal |
| **Exponentiation** | `pow()` function | `**` | `^` | `**` |
| **Modulo** | `%` | `%` | `%` or `mod()` | `%` |
| **Increment/Decrement** | `++`, `--` | ❌ (use `+= 1`) | ❌ (use `+= 1`) | `++`, `--` |
| **Compound Assignment** | `+=`, `-=`, `*=`, `/=`, `%=` | `+=`, `-=`, `*=`, `/=`, `//=`, `**=` | `+=`, `-=`, `*=`, `/=`, `^=` | `+=`, `-=`, `*=`, `/=`, `%=`, `**=` |
| **Equality** | `==` | `==` (value), `is` (identity) | `==` (value), `===` (identity) | `===` (strict), `==` (loose) |
| **Logic AND** | `&&` | `and` | `&&` | `&&` |
| **Logic OR** | `\|\|` | `or` | `\|\|` | `\|\|` |
| **Logic NOT** | `!` | `not` | `!` | `!` |
| **Short-circuit** | Yes | Yes | Yes | Yes |
| **Comparison Chaining** | No | Yes (`x < y < z`) | Yes (`x < y < z`) | No |
| **Type Coercion** | Numeric promotions | Minimal | Type-stable | Extensive (avoid with `===`) |
| **Truthy/Falsy** | 0 is false, non-zero true | Empty = falsy | Only `true`/`false` | `0`, `""`, `null`, `undefined`, `NaN` = falsy |

---

## Control Flow Comparison

| Feature | C++ | Python | Julia | TypeScript |
|---------|-----|--------|-------|------------|
| **If/Else Syntax** | Braces `{}` | Indentation | `end` keyword | Braces `{}` |
| **Ternary** | `? :` | `if-else` inline | `? :` | `? :` |
| **For Loop** | Traditional & range-based | `for-in` only | `for-in` with ranges | Traditional & `for-of` |
| **While Loop** | `while`, `do-while` | `while` only | `while` only | `while`, `do-while` |
| **Switch/Match** | `switch` (limited) | `match-case` (3.10+) | If-elseif chains | `switch` |
| **Pattern Matching** | No | Yes (3.10+) | Multiple dispatch | No |
| **Loop Else** | No | Yes | No | No |
| **Labeled Break** | No (use `goto`) | No | `@goto` | Yes |
| **Break/Continue** | Yes | Yes | Yes | Yes |

### Key Differences

#### C++
- **Braces required** for blocks (optional for single statements)
- **Traditional for loop** with three parts
- **Range-based for** for modern iteration
- **Do-while** executes at least once
- **Switch** limited to integral types
- **goto** available but discouraged

#### Python
- **Indentation-based** syntax (no braces)
- **No traditional for loop** - uses `for-in` with `range()`
- **No do-while** - simulate with `while True` + `break`
- **match-case** (3.10+) with powerful pattern matching
- **Loop else** clause - executes if no `break`
- **Walrus operator** (`:=`) for assignment in conditions

#### Julia
- **end keyword** closes all blocks
- **Multiple assignment forms** (`for i in` or `for i =`)
- **No built-in switch** - use if-elseif or dictionaries
- **Multiple dispatch** instead of pattern matching
- **Compact nested loop** syntax: `for i in 1:3, j in 1:3`
- **@goto and @label** for advanced control flow

#### TypeScript
- **JavaScript-based** syntax with type annotations
- **Both traditional and modern** loop styles
- **for-of** for values, **for-in** for keys/indices
- **Labeled statements** for breaking outer loops
- **No loop else** clause
- **Functional alternatives** (map, filter, forEach)
- **async/await** compatible loops

---

## Function Overloading vs Multiple Dispatch

| Feature | Function Overloading (C++) | Multiple Dispatch (Julia) |
|---------|---------------------------|---------------------------|
| **Type Resolution** | Compile-time, static types | Runtime, actual types |
| **Extensibility** | Limited to class definition | Open - anyone can extend |
| **Symmetry** | Asymmetric (receiver special) | Symmetric (all args equal) |
| **Type Checking** | Manual casting often needed | Automatic |
| **Adding to Existing Functions** | Usually impossible | Easy and common |
| **Performance** | Fast (compile-time) | Fast (JIT-compiled) |

### The Real Difference

**Overloading** = "I'm defining multiple versions of a function **I own**"

**Multiple Dispatch** = "I'm extending a function **anyone can own** with new type combinations"

It's the difference between:
- **Closed system**: Only the original author can add behavior
- **Open system**: Anyone can extend any function for new types

This makes Julia extremely composable - libraries work together without anyone planning for it!

---

## Advanced Iteration Comparison

| Feature | C++ | Python | Julia | TypeScript |
|---------|-----|--------|-------|------------|
| **Range-based for** | `for (auto x : vec)` | `for x in list:` | `for x in arr` | `for (let x of arr)` |
| **Index iteration** | `for (size_t i=0; ...)` | `for i in range(len(...))` | `for i in eachindex(...)` | `for (let i=0; ...)` |
| **Iterator access** | `.begin()`, `.end()` | `iter()`, `next()` | Native iterator | `Symbol.iterator` |
| **Enumerate** | Manual with counter | `enumerate()` | `enumerate()` | `.entries()` |
| **Reverse iteration** | `.rbegin()`, `.rend()` | `reversed()` | `reverse()` | Reverse loop or `.reverse()` |
| **Key-value iteration** | Structured binding | `.items()` | Native unpacking | `Object.entries()` |
| **String iteration** | Char by char | Char by char | Char by char | Char by char |
| **Parallel iteration** | `<execution>`, OpenMP | `multiprocessing` | `@threads` | Worker threads |

### Key Differences

#### C++
- **Range-based for** - clean syntax with `auto`
- **Iterator-based** - explicit iterator control
- **Reference vs value** - `&` for reference, no `&` for copy
- **Reverse iterators** - `.rbegin()`, `.rend()`
- **Structured bindings** (C++17) - unpack pairs/tuples

#### Python
- **for-in only** - no traditional C-style for loop
- **enumerate()** - built-in index access
- **Multiple unpacking** - `for k, v in dict.items()`
- **reversed()** - simple reverse iteration
- **Generator-friendly** - works with any iterable

#### Julia
- **1-indexed** - arrays start at 1, not 0
- **eachindex()** - safe, efficient indexing
- **end keyword** - last index in array
- **Compact nested syntax** - `for i in 1:3, j in 1:3`
- **Broadcasting** - `.` operator for element-wise

#### TypeScript
- **for-of vs for-in** - values vs indices/keys
- **.entries()** - get index-value pairs
- **forEach** - functional but no break/continue
- **Map/Object iteration** - different syntaxes
- **Async iteration** - `for await` for async iterables

---

## Glossary

### Identity comparison
Checks if two variables refer to the exact same object in memory, not just whether they have the same value.

**Python Example:**
```python
a = [1, 2, 3]
b = [1, 2, 3]
c = a

a == b  # True (same contents)
a is b  # False (different objects in memory)
a is c  # True (c points to the same object as a)
```

### Short Circuit
Exits when the first check already satisfies the condition. For example, in `x && y`, if `x` is false, `y` is never evaluated.

### Duck Typing
A programming concept where the type or class of an object is less important than the methods it defines. "If it walks like a duck and quacks like a duck, it must be a duck."

### Type Inference
The ability of a programming language to automatically deduce the type of a variable from its value, without explicit type annotation.

### JIT (Just-In-Time) Compilation
A method of executing code that involves compilation during execution of a program rather than before execution.
