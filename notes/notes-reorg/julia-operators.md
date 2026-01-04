# Julia - Operators

## Operators

### Math operators
Similar to Python, including `^` for exponentiation and `÷` (or `div()`) for integer division. Very flexible—operators are just functions, so `+(1,2)` equals `1+2`. Supports Unicode operators like `∈` for set membership.
```julia
a, b = 10, 3
sum_val = a + b        # 13
quotient = a / b       # 3.3333... (float)
int_div = a ÷ b        # 3 (or div(a, b))
power = a ^ b          # 1000
remainder = a % b      # 1

result = +(1, 2, 3)    # 6 (same as 1 + 2 + 3)

in_set = 2 ∈ [1, 2, 3] # true
```

### Compound assignment
`+=`, `-=`, `*=`, `/=`, `÷=`, `%=`, `^=` modify variable in place. Julia has no `++` or `--` operators—use `x += 1` instead.
```julia
x = 10
x += 5    # x = 15
x -= 3    # x = 12
x *= 2    # x = 24
x ÷= 4    # x = 6
x ^= 2    # x = 36
x += 1    # No x++ in Julia!
```

### Comparison operators
Support chaining like Python: `1 < 2 < 3`. `==` compares values, `===` checks if objects are identical. Broadcasting with `.==` compares arrays element-wise: `[1,2] .== [1,3]` returns `[true, false]`.
```julia
a, b, c = 5, 10, 15
equal = (a == b)           # false
chained = (a < b < c)      # true (can chain!)

arr1 = [1, 2, 3]
arr2 = [1, 2, 4]
element_eq = arr1 .== arr2 # [true, true, false]

x = [1, 2, 3]
y = [1, 2, 3]
z = x
println(x == y)            # true (same values)
println(x === y)           # false (different objects)
println(x === z)           # true (same object)
```

### Logic operators
`&&` (and), `||` (or), `!` (not), similar to C++. Short-circuit evaluation. For element-wise array operations, use `&`, `|` without short-circuiting, or broadcast: `.&&`. Only `true`/`false` are boolean; numbers don't auto-convert.
```julia
a, b = true, false
and_result = a && b        # false
or_result = a || b         # true
not_result = !a            # false

arr1 = [true, false, true]
arr2 = [true, true, false]
bitwise_and = arr1 .& arr2 # [true, false, false]

x = 0
if x != 0 && 10 / x > 2
    println("Safe!")
end
```

---

---