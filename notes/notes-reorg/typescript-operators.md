# TypeScript - Operators

## Operators

### Math operators
Work like JavaScript: `+`, `-`, `*`, `/`, `%`, plus `**` for exponentiation. Division always returns numbers with decimals. `+` also concatenates strings, and type coercion can be tricky: `"5" + 3 = "53"` but `"5" - 3 = 2`.
```typescript
let a: number = 10, b: number = 3;
let sum: number = a + b;        // 13
let quotient: number = a / b;   // 3.3333... (always float)
let power: number = a ** b;     // 1000
let remainder: number = a % b;  // 1

let concat = "5" + 3;           // "53" (string concatenation)
let subtract = "5" - 3;         // 2 (coerced to number)
let multiply = "5" * 3;         // 15 (coerced to number)
```

### Increment/decrement
`++` and `--` work as prefix (`++x`) or postfix (`x++`). Prefix returns new value, postfix returns old value.
```typescript
let x: number = 5;
let y: number = ++x;  // x = 6, y = 6 (prefix)
let z: number = x++;  // x = 7, z = 6 (postfix)
```

### Compound assignment
`+=`, `-=`, `*=`, `/=`, `%=`, `**=` modify variable in place: `x += 5` is `x = x + 5`.
```typescript
let x: number = 10;
x += 5;   // x = 15
x -= 3;   // x = 12
x *= 2;   // x = 24
x /= 4;   // x = 6
x %= 4;   // x = 2
x **= 2;  // x = 4
```

### Comparison operators
Have two versions: loose (`==`, `!=`) with type coercion, and strict (`===`, `!==`) without. Always prefer strict equality: `5 === "5"` is false, but `5 == "5"` is true due to coercion. TypeScript's type system helps catch comparison errors at compile time.
```typescript
let a: number = 5;
let b: string = "5";

console.log(a == b);        // true (coercion)
console.log(a != b);        // false

console.log(a === b);       // false (different types)
console.log(a !== b);       // true

let x: number = 10, y: number = 20;
console.log(x < y);         // true
console.log(x >= y);        // false
```

### Logic operators
`&&`, `||`, `!`. Short-circuit and return the actual value: `"hello" || "world"` returns `"hello"`. Falsy values are `false`, `0`, `""`, `null`, `undefined`, `NaN`. The nullish coalescing operator `??` only treats `null`/`undefined` as falsy.
```typescript
let a: boolean = true, b: boolean = false;
let andResult: boolean = a && b;    // false
let orResult: boolean = a || b;     // true
let notResult: boolean = !a;        // false

let value1 = "hello" || "world";    // "hello"
let value2 = 0 || 42;               // 42
let value3 = "" || "default";       // "default"

let nullValue: string | null = null;
let result1 = nullValue ?? "default";  // "default"
let result2 = 0 ?? "default";          // 0 (0 is not null/undefined)

if (!0 && !"" && !null && !undefined) {
    console.log("All falsy!");
}
```

---

---