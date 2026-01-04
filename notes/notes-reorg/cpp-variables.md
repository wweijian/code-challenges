# C++ - Variables, Data Types & Type Casting

## Variables & Data Types

### Basic Variable Declaration

```cpp
// Explicit type required
int x = 5;
float y = 3.14;
string name = "John";
bool isActive = true;

// Type inference (C++11+)
auto z = 10;        // int
auto pi = 3.14;     // double
```

### Common Data Types

| Type | C++ |
|------|-----|
| **Integer** | `int`, `long` |
| **Float** | `float`, `double` |
| **String** | `string` |
| **Boolean** | `bool` |
| **Null/None** | `nullptr` |

### Key Characteristics
- **Strongly typed** - must declare type
- **Compiled** - type errors caught at compile time
- **Manual memory management** (unless using smart pointers)
- `auto` keyword allows type inference

---

---

## Variable Modifiers & Scope

### Global variable
```cpp
int globalVar = 100;
```

### Static
Different meanings in different contexts
```cpp
static int staticVar = 50;           // File-scope only
static int counter = 0;              // Persists across function calls
```

### Const
Immutable
```cpp
const int MAX_SIZE = 1000;
```

### Constexpr
Compile-time constant
```cpp
constexpr int ARRAY_SIZE = 100;
```

### Volatile
Don't optimize, can change unexpectedly
```cpp
volatile int hardwareRegister = 0;
```

### Mutable
Can be modified even in const objects
```cpp
mutable int cacheHits = 0;
```

### Thread-local storage
```cpp
thread_local int threadCounter = 0;
```

### Extern
Declare variable defined elsewhere
```cpp
extern int externalVar;
```

### Register
Hint to compiler, rarely used
```cpp
register int fastVar = 10;
```

### Class context
```cpp
class MyClass {
    static int classVar;             // Shared across all instances
    const int constMember = 5;       // Must initialize in constructor
    mutable int cache;               // Can change in const methods
};
```

---

---

## Type Casting

### C-style cast
Avoid in modern C++
```cpp
int x = 5;
double y = (double)x;
```

### static_cast
Most common, compile-time
```cpp
double z = static_cast<double>(x);
int a = static_cast<int>(3.14);     // 3
```

### dynamic_cast
Runtime type checking, for polymorphism
```cpp
Base* basePtr = new Derived();
Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
if (derivedPtr != nullptr) {
    // Safe to use
}
```

### const_cast
Remove const qualifier
```cpp
const int* constPtr = &x;
int* modifiablePtr = const_cast<int*>(constPtr);
```

### reinterpret_cast
Dangerous, low-level
```cpp
int num = 65;
char* charPtr = reinterpret_cast<char*>(&num);
```

### Implicit conversion
```cpp
int i = 42;
double d = i;       // Implicit conversion OK
```

### Explicit constructor
```cpp
std::string str = std::string("hello");
```

### Key Characteristics
- **Most explicit** - many cast types for different scenarios
- **Compile-time safety** with `static_cast`
- **Runtime safety** with `dynamic_cast`
- **Fine-grained control** over memory and access

---

---