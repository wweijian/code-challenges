# Python - Variables, Data Types & Type Casting

## Variables & Data Types

### Basic Variable Declaration

```python
# Dynamic typing - no type declaration
x = 5              # int
y = 3.14           # float
name = "John"      # str
is_active = True   # bool

# Type hints (optional, Python 3.5+)
x: int = 5
y: float = 3.14
name: str = "John"
```

### Common Data Types

| Type | Python |
|------|--------|
| **Integer** | `int` |
| **Float** | `float` |
| **String** | `str` |
| **Boolean** | `bool` |
| **Null/None** | `None` |

### Key Characteristics
- **Dynamically typed** - type determined at runtime
- **Interpreted** - flexible but can have runtime type errors
- **Type hints** are optional and not enforced at runtime
- Variable can change type: `x = 5` then `x = "hello"` is valid

---

---

## Variable Modifiers & Scope

### Global variable
```python
global_var = 100
```

### Access global
```python
def function():
    global global_var
    global_var = 200
    
    # Local variable (default)
    local_var = 50
```

### Nonlocal
For nested functions
```python
def outer():
    x = 10
    def inner():
        nonlocal x
        x = 20
```

### "Static" variable
Using default arguments
```python
def counter(count=[0]):
    count[0] += 1
    return count[0]
```

### Class variables
Shared across instances
```python
class MyClass:
    class_var = 100          # Class variable (like static)
    
    def __init__(self):
        self.instance_var = 50   # Instance variable
```

### Module-level constant
Convention only
```python
MAX_SIZE = 1000              # CAPS = constant by convention
```

### Private
Convention, not enforced
```python
_private_var = 10            # Single underscore = internal use
__very_private = 20          # Double underscore = name mangling
```

---

---

## Type Casting

### Explicit type conversion
```python
x = 5
y = float(x)        # 5.0
z = str(x)          # "5"
a = int(3.14)       # 3
b = bool(0)         # False
c = list("abc")     # ['a', 'b', 'c']
```

### No type casting needed
Duck typing
```python
def process(value):
    return value * 2

process(5)          # 10
process("hi")       # "hihi"
process([1, 2])     # [1, 2, 1, 2]
```

### Type checking
Runtime
```python
x = 5
if isinstance(x, int):
    print("It's an integer")
```

### Type assertion
For type checkers, not runtime
```python
from typing import cast
x: object = "hello"
y: str = cast(str, x)   # Just tells type checker
```

### Convert between collections
```python
my_list = [1, 2, 3]
my_tuple = tuple(my_list)
my_set = set(my_list)
my_dict = dict(zip(['a', 'b'], [1, 2]))
```

### Key Characteristics
- **No real casting** - uses duck typing
- **Type conversion** instead of casting
- **Runtime type checking** with `isinstance()`
- **Type hints don't enforce**, just for tooling

---

---