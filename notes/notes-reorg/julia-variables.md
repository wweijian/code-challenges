# Julia - Variables, Data Types & Type Casting

## Variables & Data Types

### Basic Variable Declaration

```julia
# Dynamic typing - no type required
x = 5              # Int64
y = 3.14           # Float64
name = "John"      # String
is_active = true   # Bool

# Explicit type annotation (optional)
x::Int64 = 5
y::Float64 = 3.14
name::String = "John"
```

### Common Data Types

| Type | Julia |
|------|-------|
| **Integer** | `Int64`, `Int32` |
| **Float** | `Float64`, `Float32` |
| **String** | `String` |
| **Boolean** | `Bool` |
| **Null/None** | `nothing` |

### Key Characteristics
- **Dynamically typed** but with **optional type annotations**
- **JIT compiled** - performance close to C++
- Type annotations help with performance optimization
- Strong focus on numerical computing types
- Multiple dispatch based on types

---

---

## Variable Modifiers & Scope

### Global variable
```julia
global_var = 100
```

### Local by default
```julia
function my_function()
    local_var = 50
    
    # Access global
    global global_var
    global_var = 200
end
```

### Const
Cannot reassign, but can modify contents
```julia
const CONSTANT = 100
const ARRAY = [1, 2, 3]
# CONSTANT = 200  # Error!
# ARRAY[1] = 10   # OK - can modify contents
```

### Module-level variables
```julia
module MyModule
    export public_var
    public_var = 100
    private_var = 50        # Not exported
end
```

### "Static" variable
Using closure
```julia
function make_counter()
    count = 0
    return function()
        count += 1
        return count
    end
end
```

### Type-stable performance optimization
```julia
function optimized()
    x::Int64 = 0        # Annotate for performance
    for i in 1:1000
        x += i
    end
    return x
end
```

---

---

## Type Casting

### convert()
Safe conversion
```julia
x = 5
y = convert(Float64, x)     # 5.0
z = convert(Int, 3.0)       # 3
# convert(Int, 3.5)         # InexactError!
```

### Type assertion
Using ::
```julia
x = 5
y = x::Int64                # Asserts x is Int64
# x::Float64                # TypeError!
```

### Promotion
Automatic
```julia
x = 1 + 2.0                 # Float64: 3.0 (promotes Int to Float)
```

### Explicit constructors
```julia
x = Float64(5)              # 5.0
y = Int64(3.0)              # 3
z = String([72, 105])       # "Hi"
```

### parse()
For strings
```julia
x = parse(Int, "123")       # 123
y = parse(Float64, "3.14")  # 3.14
```

### Type checking
```julia
x = 5
if x isa Int64
    println("It's an Int64")
end
```

### typeof()
For type inspection
```julia
typeof(5)                   # Int64
typeof(3.14)                # Float64
```

### Union types
Can be multiple types
```julia
x::Union{Int, String} = 5
x = "hello"                 # Also valid
```

### Abstract types
```julia
function process(x::Real)   # Accepts any real number
    return x * 2
end
```

### Key Characteristics
- **`convert()` for safe conversion** - errors if impossible
- **Type assertions** with `::` for optimization
- **Multiple dispatch** based on types
- **Performance-focused** type system

---

---