# C++ - Operators

## Operators

### Math operators
(`+`, `-`, `*`, `/`, `%`) work on numeric types. Integer division truncates (`5/2 = 2`). Use modulo `%` for remainders.
```cpp
int a = 10, b = 3;
int sum = a + b;        // 13
int diff = a - b;       // 7
int product = a * b;    // 30
int quotient = a / b;   // 3 (truncates)
int remainder = a % b;  // 1
```

### Increment/decrement
`++` and `--` work as prefix (`++x`) or postfix (`x++`). Prefix returns new value, postfix returns old value.
```cpp
int x = 5;
int y = ++x;  // x = 6, y = 6 (prefix)
int z = x++;  // x = 7, z = 6 (postfix)
```

### Compound assignment
`+=`, `-=`, `*=`, `/=`, `%=` modify variable in place: `x += 5` is `x = x + 5`.
```cpp
int x = 10;
x += 5;   // x = 15
x -= 3;   // x = 12
x *= 2;   // x = 24
x /= 4;   // x = 6
x %= 4;   // x = 2
```

### Comparison operators
(`==`, `!=`, `<`, `>`, `<=`, `>=`) return boolean values. `==` compares values; for pointers, use carefully as it compares addresses. String comparison works with `std::string` but C-strings need `strcmp()`.
```cpp
int a = 5, b = 10;
bool equal = (a == b);      // false
bool notEqual = (a != b);   // true
bool less = (a < b);        // true
bool greater = (a > b);     // false

std::string s1 = "hello", s2 = "world";
bool strEqual = (s1 == s2); // false
```

### Logic operators
`&&` (and), `||` (or), `!` (not). They short-circuit. Work on any type that converts to bool (0 is false, non-zero is true).
```cpp
bool a = true, b = false;
bool andResult = a && b;    // false
bool orResult = a || b;     // true
bool notResult = !a;        // false

int x = 0;
if (x != 0 && 10 / x > 2) {
    // Safe from division by zero
}
```

---

---